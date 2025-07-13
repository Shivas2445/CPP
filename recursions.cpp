#include<iostream>
using namespace std;
 
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int fib(int a)
{
    if(a<2)
    {
        return 1;
    }
    return fib(a-2)+fib(a-1);
}
int main(){
    //Factorial of a number
    //6! = 6*5*4*3*2*1 =720
    //n!=n*(n-1)!
    int n;
    cout<<"enter the number  :";
    cin>> n;
    cout<<"Factorial of number "<<n<< " is = "<<fact(n)<<endl;

    cout<<"Fibonachi  of number "<<n<< " is = "<<fib(n)<<endl;
   return 0;
}