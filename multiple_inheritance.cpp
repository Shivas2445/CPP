#include<iostream>
using namespace std;

class base1
{
protected:
    int base1int;
public:
    int set_base1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;
public:
    int set_base2(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public :
    void show()
    {
        cout<<"The value of base1= "<<base1int<<endl;
        cout<<"The value of base2= "<<base2int<<endl;
        cout<<"The sum of the base 1 and base 2 is "<<base1int+ base2int <<endl;


    }
};

int main()
{
    derived d;
    d.set_base1(25);
    d.set_base2(5);
    d.show();

    return 0;
}
