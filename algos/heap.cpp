		
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


	class MaxHeap {
	private:
		vector<int> heap;

		void heapifyUp(int index){
			// BASE - CASE
			if(index == 0) return;
			int parentIndex = (index-1)/2;

			if(heap[parentIndex] < heap[index]){
				swap(heap[parentIndex],heap[index]);
				heapifyUp(parentIndex);
			}
		}
		void heapifyDown(int index) {
	        int leftChild = 2 * index + 1;
	        int rightChild = 2 * index + 2;
	        int largest = index;

	        if (leftChild < heap.size() && heap[leftChild] > heap[largest])largest = leftChild;

	        if (rightChild < heap.size() && heap[rightChild] > heap[largest])
	            largest = rightChild;

	        if (largest == index) return;

	        swap(heap[index], heap[largest]);
	        heapifyDown(largest);
   		}

	public:
		MaxHeap(){ }
		
		void push(const int val){
			heap.push_back(val);
			int index = heap.size() - 1;
			heapifyUp(index);
		}

		void pop(){
			heap[0] = heap.back();
			heap.pop_back();
			heapifyDown(0);
		}

		int top(){
			if(isEmpty()) throw out_of_range("Heap is empry");
			return heap[0];
		}
		int size(){
			return heap.size();
		}
		bool isEmpty() {
			return heap.size() == 0;
		}
	};


	void solve(int N){
		vector<int> V(N,0);
		for(auto &x:V) cin >> x ;

		// for(auto x: V) cout << x <<  " ";
		// cout << endl;
		MaxHeap heap;
		for(auto x: V) heap.push(x);

		heap.pop();
		// heap.pop();

		cout << heap.top() << endl;
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



