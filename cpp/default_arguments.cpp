#include <iostream>
using namespace std;

// only in definition
void f(int i,int j=4,int k=5);

void f(int i,int j,int k) {
    cout << "i=" << i << " ";
    cout << "j=" << j << " ";
    cout << "k=" << k << endl;
}

int main()
{
    cout << "f(1)" << endl;
    f(1);
    cout << "f(1,2)" << endl;
    f(1,2);
    cout << "f(1,2,3)" << endl;
    f(1,2,3);
    return 0;
}
