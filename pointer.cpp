#include<iostream>
using namespace std;
 
int main(){
    // what is a pointer? -->data type which holds the address  of other data types
    int a=3;
    int *b=&a;
    cout<<"The address of a:"<<b<<endl;
    cout<<"The address of a:"<<&a<<endl;
    cout<<"the value of a :"<<*b<<endl;
    cout<<"the value of a :"<<a<<endl;

    //pointer to pointer
    int **c=&b;
    cout<<"The address of b is :"<<&b<<endl;
    cout<<"The address of b is :"<<c<<endl;
    cout<<"The value at address c is :"<<*c<<endl;
    cout<<"The value at address value at(address(c)) is :"<<**c<<endl;

   return 0;
}