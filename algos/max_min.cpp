
		
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
	// ** return {max,min}

	class MaxMin {

		public : 
		int count = 0;

		pair<int,int> getMaxMin(vector<int>& nums,int l, int r){
			// base case:
			if(r-l <= 1) {
				count ++;
				if(nums[r]>nums[l]){
					return make_pair(nums[r],nums[l]);
				}
				return make_pair(nums[l],nums[r]);
			}
			int mid = l +(r-l)/2;
			pair<int,int> leftSub = getMaxMin(nums,l,mid);
			pair<int,int> rightSub = getMaxMin(nums,mid+1,r);

			int minVal,maxVal;
			if(leftSub.first <= rightSub.first){
				count ++;
				maxVal = rightSub.first;
			}
			if(leftSub.second <= rightSub.second){
				count ++;
				minVal = leftSub.second;
			}

			return make_pair(maxVal,minVal);
		}

	};


	void solve(int N){
		vector<int> nums(N,0);
		for(auto &x:nums) cin >> x; 

		MaxMin obj;
		pair<int,int> p = obj.getMaxMin(nums,0,nums.size()-1);
		
		cout << "Max: " << p.first << " MIN: " << p.second;
		cout << endl << "No of Swaps : " << obj.count <<  endl;
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
// # APPROACH

// # TEST-CASE-2:
// # TEST-CASE-1:



