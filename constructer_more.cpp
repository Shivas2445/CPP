#include<iostream>
using namespace std;


class complex
{
    int a,b;
public:
    complex (int x,int y)
    {
        a=x;
        b=y;
    }

    complex(int x)
    {
        a=x;
        b=0;
    }
    void print()
    {
        cout<<"Your Number is "<< a << " + "<<b<<endl;

    }
};
int main()
{
    complex c1(4,6);
    c1.print();
    complex c2(5);
    c2.print();
    return 0;
}
