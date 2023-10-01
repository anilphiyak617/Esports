
#include<bits/stdc++.h>
#include <exception> // Include for std::exception
using namespace std;


// Custom exception class derived from std::exception
class QueueException : public std::exception {
public:
    const char* what() override {
        return "Popping from empty Queue";
        // throw exception();
    }
};





// queues using stacks
template<typename T>
class Queue{
    stack<T> s1;  
    stack<T> s2;
    
    void copy(){
        // copying in reverse from s1----> s2
        while(!s1.empty()){
            int top = s1.top();
            s1.pop();
            s2.push(top);
        }
    }

public:
    void push(T x){
        s1.push(x);
    }
    void pop(){
        if(this->size() == 0) throw exception();
        if(s2.empty())  copy();
        s2.pop();
    }
    T top(){
        if(s2.empty())  copy();
        return s2.top();
    }

    int size(){
        return s1.size() + s2.size();
    }
};

int main()
{
   Queue<int> q;

   try {

   // q.push(3);
   // q.push(4);
   // q.push(6);
   // q.push(9);
   q.pop();
   cout << q.top() << endl;
   }
   catch(const exception &err){
    cout << err.what() << endl;
   }
    return 0;

} 