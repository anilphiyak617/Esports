		
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

// # CRITICAL OBSERVATIONS
	
// # find the mex of all subarray and find the kth mex among them
// # left pointer ----> leftmost end of subarray that must be included
// # right pointer ----> rightmost end that must be included
// # if target idx lies between l and r => no subarray with given mex is possible
// # keep updating left and right 
// # iterate the mex from 1 to N : find the number of subarrays 
// # case 1: target idx < left  : (left - targetIdx) * (N - right )
// # case 2: target idx > right : (left + 1) * (targetIdx - right)
// # case 3: in between l and r : 0

// # [ 3, 2, 4, 1 ,5]
// #   1
// # 1 : 6 + 1
// # 2 : 4
// # 3 : 2
// # 4 :  
// # APPROACH

// # TEST-CASE-2:
// # TEST-CASE-1:



