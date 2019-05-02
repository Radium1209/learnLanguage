#include <iostream>
using namespace std;

class A{
    int i;
public:
    A(int x) {
        cout << "This is constructor." << endl;
        i=x;
    };
    void print();
    ~A() {
        cout << "This is destructor." << endl;
    };
};

void A::print(){
    cout << "this->i = " << this->i << endl;
}

int main()
{
    A a(12);
    a.print();
    return 0;
}
