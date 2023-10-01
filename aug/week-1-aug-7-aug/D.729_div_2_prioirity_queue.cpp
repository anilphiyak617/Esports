		
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
	// # [-, 2,1,...., -,......] 
	// # if considering the subseq [- ,..., -] 
	// # : only the smallest we be removed 
	// # 

	// # APPROACH
	

	// # TEST-CASE-3 generalised:
	// [ 1 2 4 5 6 _ _ _ _ 1 2 4 - - - ] 
	// 0 : 1
	// [ 1 2 4 5 6 _ _ _ _ 1 2 4 - - - ] 
	// 2^k -1 : 4C1 + 4C2 + 4C3 + 4C4 + 4C0 - 4C0  
    // 2 ^ 4 * (2 ^ 4 - 1) * 2 ^ 6

    // 1: 2
	// [ 1 2 4 5 6 - - - -  1 2 4 - - - ] 
    //   2 ^ 3 * (2 ^ k - 4C0 - 4C1) * 2 ^ 6
	
	// [ 1 2 2 3 4 5 6 - - - -  1 2 4 - - - 2 3 4 8 - - - - - ] 
    //              seg-1          seg2         seg-3
	// num of subseq in which the  4 at idx: 3, is present : 2**n-1
	// num of subseq in which 4 can be removed by '-'  
    // num of ele smaller than 4 and before prev seg 2 
    // we need atleast 
	
	// dp[i][x] : number of subsequence from [i+1 ...N] that can remove x numbers < = nums[i]
    // dp[8][1] : 3
    // dp[8][2] : 1
    // dp[4][1] : 2*3
    // dp[4][1] : 2*1
    // dp[7][1] : 
	// [2 7 -  4 8 - - ]
	//           

	// # TEST-CASE-2:
	// # case : [ 1 3  3 4 2 - - - - ]  # solved
	// [ 2 4 5 6 7 8 9 - - - - ]
	// 2 is removed : 
	// dp[2] = 2^6 + 2^5 + 2^4 ... 2 : 2^k+1 - 2
	// 4 is removed
	// dp[4] = 2^5 + 2^4 + 2^3....  : 2^(k) - 2
	// 5 is removed
	// dp[5] = 2^4 + 2^3 + 2^2 + 2^1 : 2^(k-1) - 2
	// ........ so on 
	
	// # case : [3 , 2 ,3 , 1, - , - ,2 ,4 , - - ]
	// 1 : 2 ^(6) 
	// [ 1 2 - 1 2 4 - ]
	//   0 1 2 3 4 5 6

	// nums[0]: 1 
	// [ 1 2* - 1* 2* 4* -* ]  2 ^ 5
	// [ 1 2* _ 1* 2* 4* - ]   2 ^ 4
    //  count 1 can be removed : 2 ^ 5 + 2 ^ 4

	// nums[1]: 2
	// [ 1 2 - 1 2 4 - ] 
	// [ _ 2 - 1* 2* 4* -* ] : 2 ^ 4
	// [ _ 2 _  _ 2* 4* - ] : 2 ^ 2

	// nums[3]: 1
	// [ 1 2 - 1 2 4 - ] 
	// [ _ 2* _ 1 2* 4* - ]  : 2^3
	// [ 1 2 - 1 2 4 - ] 
	// [ 1* 2* - 1 2* 4* - ]  : 2^(4)
	// [2...] 

	// nums[4]: 2
	// [ 1 2 4 5 6 _ _ _ _ 1 2 4 - - - ]   :  3C1 * 2C1* 2 ^2   3C2 * 2 ^(1)  3C3 * 2  
	// [ 1 2 - 1 2 4 - ] 
	// [ 1 2 - 1 2 4 - ]  :  
	// [ _ 2* - _ 2 4* - ] 
	// [1* _ - _ 2 4* - ]   2C1 * 2 ^ 2 
	// 

	// # TEST-CASE-2:
	
	// [1, 2, 5, -] 
	// [1,2,5]
	// []
	// [1]
	// [1, 2]
	// [1, 2, 5]
	// [1, 5]
	// [2]
	// [2, 5]
	// [5]
	// 1 : 4
	// 2 ; 4
	// 5 : 4
	// res = 5 * 4 + 2 * 4 + 1 * 4 = 32
	// considering last - will be included
	// 1 is removed : - 4 * 1 
	// 2 is removed : - 2 * 2
	// 5 is removed : - 1 * 5 
	

	// # TEST-CASE-1:
	// [ - , 1, 2, - ]
	// [ ]
	// [1, -]
	// [1 , 2 , -]
	// [2 , - ]
	// 1 : 2  = 2
	// 2 : 2  = 4 
    // res =  6
    // remove 1 : - 2 * 1 
    // remove 2 : -1 * 2 
    // res = 2 * 2 including first - 
    // not including the last  - 
    // 6 * 2 = 12 
    // res = 16

