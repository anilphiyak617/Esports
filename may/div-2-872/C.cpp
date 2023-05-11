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
    vector<int> seat(n+1,0);
    vector<int> pos(m+1,0);

    int lR=0,rL=0;
    for(int i=1;i<=n;i++){
    	cin>>seat[i];
    	// if(seat[i]==1 or seat[i]==N) continue;
    	if(seat[i]==-2) lR++;
    	else if(seat[i]==-1) rL++;
    	else pos[seat[i]]=-1;
    } 

	// cout<<lR<<" "<<rL<<endl;
	int i=1;
    while(i<=m and lR>0){
    	if(pos[i++]==-1) continue;
    	pos[i]=-1;
    	lR--;
    }
    i=m;
     while(i>=0 and rL>0){
    	if(pos[i--]==-1) continue;
    	pos[i]=-1;
    	rL--;
    }

    // for(auto x:pos) cout<<x<<" ";
    // cout<<endl;
    int res=0;
    for(auto x:pos){
    	if(x==-1) res++;
    }
    cout<<res<<endl;
}

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
        cin>>n>>m;
        solve(n,m);
    }
    return 0;
}


// Obsservation-Approach
// 5 7
// -1 -1 4 -2 -2
// -2 -2 -1 -1 4
//  X X 3 X 5 X X

// 6 8
// -1 -1 -1 3 -1 -2
// -2 -1 -1 -1 -1 

// 6 7
// 5 -1 -2 -2 -2 -2
// -2 -2 -2 -2 -1 5
// _ _ _ _ X _  _
// 1 2 3 4 5
// l-r: 4
// r-l:1
// 5

