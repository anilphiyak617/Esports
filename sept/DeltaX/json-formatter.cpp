		
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
	// #define s second
	using namespace std;

	// TEST CASE
	// {"person":{"name":"Alice","age":30}}


	string formattedRes = "";
	void printJSON(int &idx,string &indent,string &data){

		// intial indentation
		formattedRes += indent;

		for(; idx < data.size(); idx++){
			
			if(data[idx] == '{' or data[idx] == '['){
				// move to new line with indentation
				formattedRes += "\n" + indent + string(1,data[idx]);
				indent+="  ";
				printJSON(++idx,indent,data);				
				// priting the end 
				formattedRes += "\n" + indent + string(1,data[idx]) + "\n";

			}

			if(data[idx] == '}' or data[idx] == ']'){
				indent.pop_back();
				indent.pop_back();
				return;
			}
			formattedRes.push_back(data[idx]);
			if(data[idx] == ',') formattedRes += "\n" + indent;
		}

	}
	void solve(){

		string data;
		cin >> data;
		string indent = "  ";
		int idx = 1;
		
		formattedRes.push_back(data[0]);
		formattedRes.push_back('\n');
		printJSON(idx,indent,data);
		formattedRes.push_back(data.back());
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
			solve();
		}
		return 0;
	}

// # TARGET
// # CONSTRAINTS

// # CRITICAL OBSERVATIONS
// # APPROACH

// # TEST-CASE-2:
// {"person":{"name":"Alice","age":30}}

// # TEST-CASE-1:
	// { 
	// **"person":
	// **{
	// ****"name":"Alice",
	// ****"age":30
	// **},
	// **"book":"ms-chauhan"
	// }


// data[idx] == "{" or "["
// 1. cout << indentation << "{" / "[" << endl;
// 2. indation += 2
// 3. call recursively prinJSON(index+1)


