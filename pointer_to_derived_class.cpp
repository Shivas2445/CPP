#include<iostream>
#include <type_traits>
using namespace std;

class baseclass{
    
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }
};
class derivedclass:public baseclass{
    
    public:
        int var_derived;
        void display(){
            
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
            cout<<"Displaying derived class variable var_base  "<<var_base <<endl;
        }
};


int main()
{
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    base_class_pointer = & obj_derived;

    base_class_pointer ->var_base=34;

    //base_class_pointer->var_derived=134;

    base_class_pointer->display();

    derivedclass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived=234;
    derived_class_pointer->display();
}