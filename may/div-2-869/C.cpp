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
    
}


long long nCr(int n, int r) {
    vector<vector<long long>> dp(n+1, vector<long long>(r+1, 0));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= r; j++) {
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        }
    }

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=r;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][r];
}

/* 


int main()
{ 
    fastread;
    #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        solve(n,m);
    }
    return 0;
}