#include <iostream>
using namespace std;
class A {
private:
    int private_val = 9;
public:
    friend void friendFunction(int a);
};

void friendFunction(){
    A obj;
    obj.private_val = 3430;
    cout << obj.private_val << endl;
}

int main() {
    A obj;
    // obj.private_val = 20;
    friendFunction(3232);
    return 0;
}
