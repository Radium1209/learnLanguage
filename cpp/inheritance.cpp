#include <iostream>
using namespace std;

// Base class
class A {
    int i;
public:
    A():i(0) { cout << "A::A()" << endl; }
    ~A() { cout << "A::~A()" << endl; }
    void print() { cout << "i=" << i << endl; }
// only Derived class can use
protected:
    void set(int ii) { i=ii; }
};

// Derived class
class B : public A {
public:
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
