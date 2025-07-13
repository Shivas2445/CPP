#include<iostream>
using namespace std;

class complex
{
    int real,imaginary;

    public:
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setdata(int a,int b){
            real=a;
            imaginary=b;
        }
};

int main(){
    complex c1;
    complex *ptr=&c1;
    (*ptr).setdata(3,4);
    (*ptr).getdata();
    

    complex *ptr1=new complex;
    ptr1->setdata(5,6);
    ptr1->getdata();
    return 0;
}