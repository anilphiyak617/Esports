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
  cout<<"called"<<endl;   
}

int main()
{ 
    fastread;
    #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
    #endif

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

// observation-appraoch
// Fish graph conditions

// Approach-1
// Detect cycles in a graph
// for each cycle check if there exists atleast one node with three nbr
// return the graph
