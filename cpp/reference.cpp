#include <iostream>
using namespace std;

/*
int x=3;
int& y=x; // y is a reference to x
const int& z=x; // can't change x through z
*/

int* f(int* x) {
    (*x)++;
    return x;
}

int& g(int& x) {
    x++;
    return x;
}

int x;

int& h() {
    int q;
    //! return q; Error
    return x;
}

int main()
{
    int a=0;
    f(&a);
    g(a);
    h()=16;
    return 0;
}
