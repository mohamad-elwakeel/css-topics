#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    long long x, y, z;
    cin >> a >> b >> c >> d;
    x = a * b;
    y = c * d;
    z = x - y;
    cout << "Difference = "<< z << endl;
    return 0;
}