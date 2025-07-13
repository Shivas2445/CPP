#include<iostream>
using namespace std;

class complex
{   int a,b;

    public:
        complex(void);

        void printnumber()
        {
            cout<<"Your number is "<<a <<" + " <<b <<"i"<<endl;

        }

};

complex :: complex(void )f
{
    a=10;
    b=0;
}

int main()
{
    complex c;
    c.printnumber();
    return 0;


}
