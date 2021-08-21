#include <iostream>
using namespace std;
int main()
{
    int x =20;
    int *ptr = &x;
    //cout << &x << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n";
    *ptr = 30;
    cout << *ptr << "\n";
    cout << x << "\n";
    return 0;
}