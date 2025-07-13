#include<iostream>
using namespace std;

class base
{
protected:
    int a;
private:
    int b;

};


/*
For a protected member:
                    | Public derivation | Private derivation | Protected derivation |

1.private members   | Not Inherited     | Not Inherited      | Not Inherited
2.Protected members | Protected         | Private            |  Protected
3.Public members    | Public            | Private            |  Protected

*/
class derived : base
{

};

int main()
{
    base b;
    derived d;
    //cout<<d.a<<endl;// Will not work since a is protected in the both base as well as derived class
    //cout<<b.a<<endl;
    return 0;
}
