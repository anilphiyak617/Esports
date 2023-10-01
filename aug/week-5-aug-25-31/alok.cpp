		
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

	int xorMultiplication(int N , int A, int B){

		int mask = 1 << (N-1);
		int x = 0;

		bool flag = 0 ;

		while(mask > 0) {
			bool a = A & mask;
			bool b = B & mask;

			if(a == 0 and b == 0) x+=mask;
			//  bits are opposite
			if( a ^ b and !flag) {
				flag = true;
				if(b) x += mask;
			} 
			else if( a ^ b ) {
				if(a) x += mask;
			} 

			mask = mask >> 1;
		}

		long long ans = 1ll*(A^X) * (B*X);
		cout << ans; 
	}

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
			 int A,B,N;
			 cin >> A >> B >> N;
			 solve(A,B,N);
		}
		return 0;
	}

// # TARGET
// # CONSTRAINTS

// # CRITICAL OBSERVATIONS
// # APPROACH

// # TEST-CASE-2:
// # TEST-CASE-1:



