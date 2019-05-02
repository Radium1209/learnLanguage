#include <iostream>
using namespace std;

class A {
public:
    int a;
    friend void getC(A a);
    A() {a=b=c=1;};
protected:
    int b;
private:
    int c;
};

// friend function can visit private member
void getC(A a) {
    cout << a.c << endl;
}

int main()
{
    A a;
    getC(a);
    return 0;
}
