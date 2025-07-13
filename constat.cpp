#include <iostream>
#include <iomanip> // Include this header for setw
using namespace std;

int main(){
    //*********************** Constant *******************
    
    // const int a = 3;
    // cout << "The value of a is: " << a;

    //************* Manipulator *******************
    int a = 3, b = 78, c = 1233;
    
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;

    // Using setw to align output
    cout << "The value of a is: " << setw(4) << a << endl;
    cout << "The value of b is: " << setw(4) << b << endl;
    cout << "The value of c is: " << setw(4) << c << endl;


    //************* Operator precedence *******************

    
    
    return 0;
}
