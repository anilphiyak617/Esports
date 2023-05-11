#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define f first
#define s second
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int N=2e5+5;
const int maxn=1002;

void solve(int n,int m)
{
    vector<int> nums(n*m);
    for(auto &x:nums) cin>>x;

    int N=n*m;
    sort(nums.begin(),nums.end());
	int maxVal=nums[N-1]-nums[0];
	int maxSec=nums[N-1]-nums[1];
	int tempSec=nums[N-2]-nums[0];

	long long res1=0,res2=0;
	if(n*(m-1)<m*(n-1)) swap(n,m);
	res1=(ll)(maxVal)*n*(m-1)+(ll)(maxSec)*(n-1);
	res2=(ll)(maxVal)*n*(m-1)+(ll)(tempSec)*(n-1);
	cout<<max(res1,res2)<<endl;
}

int main()
{ 
    fastread;
    // #ifndef ONLINEJUDGE
    //    clock_t tStart = clock();
    //    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    //    freopen("output.txt","w",stdout); // this one for output
    // #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        solve(n,m);
    }
    return 0;
}

// Observation-Approach
// constraints: n*m<1e4 and n,m>=2
// Target: Maximise the Difference in the Subtable : (1,1)---->(i,j)

// TEST CASE 3:
// 3 2
// 4 8 -3 0 -7 1
// sorted: -7 -3 0 4 8
// 8 -7 _ 
// _ _ _ 
// 
// 15*3 + 12*2 =45+22=67
// 15*4+11*

// _ _
// _ _
// _ _ 



// TEST CASE 2:
// 2 3
// 7 8 9 -3 10 8
// sorted: -3 7 8 8 9 10
// 10 -3  _
// _  _  _
// 13 * n*(m-1) + 12*n-1
// 13*4+12*1
// 52+12=64

// TEST CASE 1:
// 1 3 1 4
// sorted: 1 1 3 4
// 4 1
// 1 4
// 3*2+
 
