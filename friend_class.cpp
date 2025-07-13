#include<iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a,int b)
    {
        return (a+b);
    }
    int sumcomplex(complex, complex);

};

class complex
{
    int a,b;
    friend int calculator :: sumcomplex(complex, complex);
public:
    void setnum(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void print()
    {
        cout<<"Your number is= "<<a<<" + "<<b<<"i"<<endl;

    }
};

int calculator :: sumcomplex(complex o1,complex o2)
{

    return( o1.a+o2.a);
}

int main()
{
    complex o1,o2;
    o1.setnum(1,4);
    o2.setnum(5,8);
    calculator calc;
    int res= calc.sumcomplex(o1,o2);
    cout<<"the sum or real part of o1 and o2 is= "<<res<<endl;
    return 0;

}
