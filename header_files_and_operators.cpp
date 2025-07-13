#include<iostream>
// there are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User-defined header files: It is written by the programmer
// #include "hello.h" // If the hello.h file is not present, we will get an error

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    cout << "This is Hello world program " << endl;

    cout << "Operators in C++" << endl;

    // 1. Arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;

    if (b != 0) { // Avoid division by zero
        cout << "The value of a / b is " << a / b << endl;
        cout << "The value of a % b is " << a % b << endl;
    } else {
        cout << "Division by zero is not allowed!" << endl;
    }

    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
        
    // Assignment Operators -> Used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;


    //Logical operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this logical and operator ((a==b)&&(a<b)) is :"<<((a==b)&&(a<b)) <<endl;
    cout<<"The value of this logical or operator ((a==b)||(a<b)) is :"<<((a==b)||(a<b)) <<endl;
    cout<<"The value of this ;ogical not operator (!(a==b)) is :"<<(!(a==b))<<endl;
    
    return 0;
}
