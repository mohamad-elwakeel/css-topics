#include <iostream>
using namespace std;

union box
{
    /* data */
    double weight;
    double width;
    double height;
};

int main(){
    box b1;

    b1.height = 20;
    b1.width  = 30;
    b1.weight = 10;

    cout << b1.height << endl;
    cout << b1.width ;
    return 0;
}