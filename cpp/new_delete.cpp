#include <iostream>
using namespace std;

int cnt=0;

class A {
    int i;
public:
    A() { cout << "A::A()" << cnt++ << endl; }
    ~A() { cout << "A::~A()" << i << endl; }
    void set(int ii) { i=ii; }
};

int main()
{
    // the same as malloc
    int *p = new int;
    A *a = new A[5];
    for (int i=0;i<5;i++)
        a[i].set(i);
    delete p;
    // delete psome; wrong
    delete [] a;
    return 0;
}
