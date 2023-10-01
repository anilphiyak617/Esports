		
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

	vector<int> getLPS(const string &pattern){
		const int patternLen =  pattern.size();
		vector<int> lps(patternLen , 0);

		int l = 0, r = 1;
		while(r < patternLen){
			if(pattern[l] == pattern[r]){
				lps[r] = l + 1;
				l++;
				r++;
				continue;
			}
			// checking if previous LPS can be increased
			if(l == 0) r++;
			else l = lps[l-1]; 
		}
		return lps;
	}

	void isPatternPresentKMP(const string &pattern, const string & text){
		int r = 0 ,l = 0;
		int patternLen = pattern.size();
		int textLen = text.size();
		vector<int> lps = getLPS(pattern);
		vector<int> indexes;
		while(r <= textLen and l <= patternLen) {
			// pattern match found'
			if(l == patternLen){
				indexes.push_back(r-patternLen);
				l = lps[l-1];
				continue;
			} 
			// if( r == textLen) break;
			if(pattern[l] == text[r]){
				l++;r++;
				continue;
			}
			if(l == 0) r++;
			else l = lps[l-1];
		}

		if(indexes.size() == 0){
			cout << "Not Found" <<endl;
			return;
		}
		
		cout<< indexes.size() <<endl;
		for( auto x: indexes) cout << x + 1 << " ";
		cout << endl;
		// return l < patternLen;
	}

	void solve( ){
		string text,pattern;
		cin >> text >> pattern;
		isPatternPresentKMP(pattern,text); 
	}

	vector<int> getLPS(const string &pattern){
			const int patternLen =  pattern.size();
			vector<int> lps(patternLen , 0);
	
			int l = 0, r = 1;
			while(r < patternLen){
				if(pattern[l] == pattern[r]){
					lps[r] = l + 1;
					l++;
					r++;
					continue;
				}
				// checking if previous LPS can be increased
				if(l == 0) r++;
				else l = lps[l-1]; 
			}
			return lps;
		}
		
		bool isPatternPresentKMP(const string &pattern, const string & text){
			int r = 0 ,l = 0;
			int patternLen = pattern.size();
			int textLen = text.size();
			vector<int> lps = getLPS(pattern);
	
			while(r < textLen and l < patternLen) {
				if(pattern[l] == text[r]){
					l++;r++;
					continue;
				}
				if(l == 0) r++;
				else l = lps[l-1];
			}
	
			return l < patternLen;
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
			 // int n;
			 // cin>>n;
			 solve();
		}
		return 0;
	}

// # TARGET
// # CONSTRAINTS

// # CRITICAL OBSERVATIONS
// # APPROACH

// # TEST-CASE-2:
// Generating LPS array i.e longest common postfix suffix array
//     i     j
// a b c a b a
// 0 1 2 3 4 5 
//[0 0 0 1 2 1]
// if current lps pattern cannot be increased go to prev lps and try to increase i.e dp[dp[i-1]]
// dp[i] ---> length of the LPS for arrar[0....i]
// next comparision can be directly started with pattern[ dp[i] ] and text[j]
// # TEST-CASE-1:



