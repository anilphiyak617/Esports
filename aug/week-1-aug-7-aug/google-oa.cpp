		
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	using namespace std;

		void solve(int N){
			
			vector<int> A(N),B(N);
			for(int i = 0 ; i < N;i ++) cin >> A[i];			
			for(int i = 0 ; i < N;i ++) cin >> B[i];

			vector<vector<int>> dp(N+1,vector <int>(2,0));
			// Intialisation dp values handling the starting cases
			dp[N-1] = {A[N-1],B[N-1]} ;
			dp[N-2] ={A[N-2] + A[N-1], B[N-2] + B[N-1]}; 

			for(int i = N-3; i >= 0; i--){
				
				dp[i][1]  =  (B[i] + dp[i+1][1] , B[i] + B[i+1] + dp[i+1][0] - A[i+1]);
  				dp[i][0] = A[i] + min(dp[i+1][0] , dp[i+1][1]);

			}			

			for(auto x : dp) {
				cout << x[0] <<" " << x[1] <<endl; 
			}
			cout << min(dp[0][1],dp[0][0]) << endl;

			// cout<<"answer-greedy" << MinCost(N,A,B);
	}




	int main()
	{
		ios_base :: sync_with_stdio(false);
	    cin.tie(NULL);
	    cout.tie(NULL);
       #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
       #endif

		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			 int n;
			 cin>>n;
			 solve(n);
		}
		return 0;
	}

// # TARGET
// # Minimising the ways the array can be divided
// # CONSTRAINTS
// # 1 =< N =< 1e5
// # CRITICAL OBSERVATIONS
// # APPROACH
//   dp[i][0]  ----> min costs for disconnecting servers from i---j keeping i th server as a microservice
//   dp[i][1]  ----> min costs for disconnecting servers from i---j keeping ith server as a monolith
// we use 2d dp and iterate from the end to get the min value and finally return min of dp[0][0] and dp[0][1]

// # TEST-CASE-2:
// # TEST-CASE-1:
// # 3 5 2  1 9
// # 1 1 10 5 3
//   dp[i][1]  =  (B[i] + dp[i+1][1] , B[i] + B[i+1] + dp[i+1][0] - A[i+1])
//   dp[i][0] = A[i] + min(dp[i+1][0] , dp[i+1][1])

// problem link: https://www.chegg.com/homework-help/questions-and-answers/servers-given-following-n-servers-initially-disconnected-cost-array-denoting-cost-array-se-q109511212