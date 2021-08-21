#include <iostream>
using namespace std;
int main()
{
    // input from users
    int width, length, area;

    cout << "Please enter rectangle width \n";
    cin >> width;

    cout << "Please enter rectangle length \n";
    cin >> length;

    area = width * length;
    cout << "Area of rectangle equal " << area << "\n";
    
    return 0;
} 
