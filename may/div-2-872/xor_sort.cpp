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

void solve(int n)
{
	vector<int> nums(n,0);
	unordered_map<int,unordered_set<int>> hmp;
	
	for(int i=0;i<n;i++){
		cin>>nums[i];
		// initialising map number--->[pos1,pos2...]
		hmp[nums[i]].insert(i);
	} 

	vector<int> temp=nums;
	vector<pair<int,int>> res;

	sort(temp.begin(),temp.end());

	for(int i=0;i<n;i++){
		int reqEle=temp[i];
		int curEle=nums[i];
		if(nums[i]==reqEle){
			hmp[reqEle].erase(i);
			continue;
		}
		// swapping is needed
		int j=*hmp[reqEle].begin();
		hmp[reqEle].erase(j);
		hmp[curEle].erase(i);
		hmp[curEle].insert(j);
		
		swap(nums[i],nums[j]);

		res.push_back({i,j});
		res.push_back({j,i});
		res.push_back({i,j});
	}

	cout<<res.size()<<endl;
	for(auto [i,j]:res){
		cout<<i+1<<" "<<j+1<<endl;
	}
    // 1 1 3 2 4
    // 1 2 3 4 5
    // 1--[5]
    // 3--[4]
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
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}



// Observation-Appraoch
// At max  4*N operations
// One operation: A[i]->A[i]^A[j]
// Swap property of XOR can be used
// 1: A[i]->A[i]^A[j]
// 2: A[j]->A[i]^A[j]
// 3: A[i]->A[i]^A[j]

// Target: Make the array non-decreasing i.e increasing 
// 2 4 1 3 2
// 1 2 2 3 4
// 