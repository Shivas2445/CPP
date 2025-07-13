#include<iostream>
using namespace std;
 
int sum(int a,int b);

//Function prototype
// type function-name(arguments);
/*
int sum(int , int);
int sum(int a, int b);
*/



int main(){
    int num1,num2;
    cout<<"Enter the first num1:"<<endl;
    cin>>num1;
    cout<<"Enter the second num2 :"<<endl;
    cin>> num2;
    cout<<"The sum is :"<<sum(num1,num2)<<endl;
   return 0;
}
int sum(int a ,int b){
    int c=a+b;
    return c;
}