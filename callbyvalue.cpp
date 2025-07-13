#include<iostream>
using namespace std;
 
int sum(int a, int b)
{
    int c= a+b;
    return c;
}
int swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    return a ,b;
}
// call by referece using pointers 

int swappointer(int * x, int * y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

//call by reference variable 
void swapreferencevar(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}


int main(){
    int a=4,b=5;
    cout<<"the sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"Before swaping the a and b values:"<<a <<" and "<< b<<endl;
    swap(a,b);
    cout<<"Before swaping the a and b values:"<<a <<" and "<< b<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<"The value of x is "<<a<<" and the value of y is "<<b<<endl;
    // swap using the pointer reference 
    swappointer(&a, &b);
    cout<<"The value of x is "<<a<<" and the value of y is "<<b<<endl;
    // swap using reference variables
    swapreferencevar(a,b);
    cout<<"The value of x is "<<a<<" and the value of y is "<<b<<endl;


   return 0;
}