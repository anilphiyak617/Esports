#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    // Virtual function
     virtual void speak() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the virtual function
    void speak() override {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the virtual function
    void speak() {
        std::cout << "Cat meows" << std::endl;
    }
};

 int fun(int arr[]){
    cout << typeid(arr).name() << endl;
    return 0;
 }
// int *fun()
// {
//     int *ptr = new int[2]{7,8};
//     int *p2 = ptr + 16;
//     *p2 = 9;
//     cout << *p2 << endl;
//     delete ptr;
//     cout << *p2 << endl;
//     // // cout <<  * ptr << endl;
//     return ptr;
// }
// int fun(int arr[][])
// {
//     // arr[2] = 1000;
//     cout<<sizeof(arr[0])<<endl;
//     return 0;
// }

int main() {
    // Dog dog;
    // Animal &animalPtr = *(neBw Dog()); 

    // int arr[3][3] = { {1,2,3}, {3,2,4}, {5,6,3} };
    int *arr[3] = {int{3,3,2,2}};
    cout << arr[0][1] << endl;

    // int arr2[4] ={1,2,3};

    // fun(arr2);
    // cout << typeid(arr2).name() << endl;

    // cout << *(arr2 + 1) << endl;
    // cout << arr[0] << endl;

    // int **ptr;    
    // cout << typeid(arr).name() << endl;
    // cout << typeid(ptr).name() << endl;


    // cout << ptr << endl;
    // cout<<arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<**(arr+1)<<endl;
    // fun(arr[0]);
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout<<arr[2]<<endl;
    // int *ptr[6] =   ;  
    // = new int[2][3];
    // {{1,2,3},{1,2,3}};
    // cout << *ptr[0] << endl;
    // void arr[];// = new int[4]{5,10};
    // fun(arr)
    // cout<<arr[1]<<endl;
    // int ar2[] = arr;
    // ar2[0]++;
    // cout<<arr[0];
    // int ptr[] = new int[10]{1,2,3};
    // cout<<*(&ptr-1)<<endl;
    // int arr[] = &ptr;
    // fun(&ptr);
    // int arr[] = (int[]) ptr;
    // int &a = new int(9);
    // animalPtr = dog;
    // Animal animalPtr = dog;
    // Dog dog =  animalPtr;

    // Dog dog;
    // Cat cat;

    // animalPtr = dog;
    // animalPtr.speak(); // Calls Dog's speak()


    // animalPtr = &cat;
    // animalPtr->speak(); // Calls Cat's speak()

    return 0;
}
