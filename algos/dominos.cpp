		
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
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	void solve(int N){
			cout<<"hello man"<<endl;
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
	// # CONSTRAINTS
	// N <  5e4
	// can binary search be applied ?
	// min : 0 and max: N
	// # CRITICAL OBSERVATIONS
	// 1<= number <= 6
	// # APPROACH
	// [2 4] [1 3] [4 6] [2 4] [1 6]
    //  0      1     2    3      4
    //  []

	// # TEST-CASE-2:
	// [1,2] [2,4] [2,4] [4,5] [4,5] [5,6] [6,3] [2,6]
	// 
	// # TEST-CASE-1:
	// 13 13 13  32 13 34 35 36
	// 0   0  0 
	// 0 ----- 32 34 35 36 
	//