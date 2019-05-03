#include <iostream>
using namespace std;

class A {
public:
    int i;
    A():i(10) {}
};

class B : public A {
public:
    int j;
    B():j(20) {}
};

int main()
{
    B b;
    A *p=&b;
    // upcast
    // A &p=b;
    cout << (*p).i << endl;
    return 0;
}
