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

void solve(string s)
{
	int N=s.size();
    int count=0;
    char ch=s[0];
    for(auto x:s) {
    	if(x!=ch) {
    		cout<<N-1<<endl;
    		return;
    	}
    }

    cout<<-1<<endl;
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
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}