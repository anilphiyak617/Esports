		
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
	void solve(ll N){

		if( N == 1) {
			cout << 2 <<endl;
			return;
		}

		ll res = 0,n = N;
		// including f(i) for all odd i's
		res = (((n+1)/2) * 2 ) % mod;
		n=n/2;

		ll candidate = 3;
		ll cur_first = 2;

		// cout << res << endl;

		while( n > 0){

			if(cur_first % candidate == 0) {
				candidate ++;
				continue;
			}

			cur_first =  lcm(candidate,cur_first);
			ll cur_possible = (n - N / cur_first) * candidate;
			// cout << cur_possible << endl;
			res = (res + cur_possible % mod) % mod;
			
			n = N / cur_first;
			candidate ++;
		}

		cout << res << endl;
	}

	int main()
	{
		ios_base :: sync_with_stdio(false);
	    cin.tie(NULL);
	    cout.tie(NULL);
       // #ifndef ONLINEJUDGE
       // clock_t tStart = clock();
       // freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       // freopen("output.txt","w",stdout); // this one for output
       // #endif

		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			 ll n;
			 cin>>n;
			 solve(n);
		}
		return 0;
	}

	// # TARGET
	// # CONSTRAINTS

	// # CRITICAL OBSERVATIONS
	// # f(i) = 2 : for i is odd

	// # TEST-CASE-2:


	// 1 2 3 4 5 6 7 8 ....  n/2 : 2
	// n = n/2  
	// 2 4 6 8 10 12 .....[1*2*k]  : n -  n / [1*2*3]  : 3   
	// n = n/[1*2*3]
	// 6 12 18 .....  [1*2*3*k]    n  - n/[1*2*3*2]  : 4   (lcm(4,6))
	// n = n / [1*2*3*2]
	// 12 24 36 48 60 72 .....[1*2*3*2*k]     n - n / [1*2*3*2*5 ] : 5 (lcm(5,12))
	// n = n / 60
	// 60 120 180 ......[1*2*3*2*5*k]  n - n / (lcm(7,60)) : 
	// n = n / 420  

	// # TEST-CASE-1:
    // 1 2 3 4 5 6 7 8 9 10  5 : 2   = 10
    // 2 4 6 8 10 4: 3
    // 6
   