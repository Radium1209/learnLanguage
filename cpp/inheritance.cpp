#include <iostream>
using namespace std;

// Base class
class A {
    int i;
public:
    A(int ii):i(ii) { cout << "A::A()" << endl; }
    ~A() { cout << "A::~A()" << endl; }
    void print() { cout << "A::print() i=" << i << endl; }
// only Derived class can use
protected:
    void set(int ii) { i=ii; }
    int geti() { return i; }
};

// Derived class
class B : public A {
public:
    B():A(15) { cout << "B::B()" << endl; }
    ~B() { cout << "B::~B()" << endl; }
    // print() in class B replace print() in class A
    void print() { cout << "B::print() i=" << geti() << endl; }
    void f() {
        set(20);
        // i=30; wrong,i is private

        print();
    }
};

int main()
{
    B b;
    // b.set(10); wrong set is protected
    b.print();
    b.f();
    return 0;
}
