#include <iostream>
using namespace std;

class A
{
    double x,y;
public:
    // init_list is before constructor
    A():x(2){cout << x << endl; x=3;};
    void print();
};

void A::print() {
    cout << x << endl;
}

int main()
{
    A a;
    a.print();
    return 0;
}
