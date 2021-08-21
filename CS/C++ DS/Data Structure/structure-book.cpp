#include <iostream>
using namespace std;

struct book
{
    /* data */
    string name;
    string author;
    int pages;
    double price;
};


int main()
{
    book b1;
    b1.name = " Book #1";
    b1.author =" John Doe";
    b1.pages = 255;
    b1.price = 29.50;

    book b2 = {"book #2", "Leanne Graham", 450, 32.00};

    book bookList[5];
    bookList[0] = {"book #3", "Ervin Howell", 290, 24.00};

    //cout <<b1.name ;

    cout << bookList[0].name;
    return 0;
}