#include <iostream>
using namespace std;

class A {
    const int i;
public:
    A() : i(0) {};
    // A* this
    void f() { cout << "f()" << endl; }
    // const A* this
    void f() const { cout << "f() const" << endl;}
};

int main()
{
    // A a;  f()
    const A a;
    // f() const
    a.f();
    return 0;
}
