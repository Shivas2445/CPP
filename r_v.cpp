#include<iostream>
using namespace std;
int c=45;
int main(){
    //********************Build in data types*********************
    /*int a, b,c;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;

    cout<<"Enter the vlaue of b :"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is :"<<c<<endl;   
    cout<<"The global c is :"<<::c<<endl; 
    */  
       //********************float, double and long double Literals*********************

    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"The value of d is: "<<d<<endl<<"The value of e is :"<<e;  
    // cout<<"The size of the 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of the 34.4 is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of the 34.4 is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of the 34.4 is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of the 34.4 is: "<<sizeof(34.4L)<<endl;

        //********************Reference Variables*********************

        // float x = 455;
        // float & y=x;
        // cout<<x<<endl;
        // cout<<y;

            //******************** Typecasting *********************

        int a=45;
        float b=45.56;
        cout<<"The value of a is "<<(float)a<<endl;
        cout<<"The value of a is "<<float(a)<<endl;

        cout<<"The value of a is "<<(int)b<<endl;
        cout<<"The value of a is "<<int(b)<<endl;

        int c= int(b);
        cout<<c<<endl;

        cout<<"The Expression is "<<a+b<<endl;
        cout<<"The expression is "<<a+int(b)<<endl;

    return 0;
}