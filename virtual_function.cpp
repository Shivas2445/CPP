#include<iostream>
#include <type_traits>
using namespace std;

class baseclass{
    
    public:
        int var_base=5;
        virtual void display(){
            cout<<"1.Displaying base class variable var_base "<<var_base<<endl;
        }
};
class derivedclass:public baseclass{
    
    public:
        int var_derived=3;
        void display(){
            
            cout<<"2.Displaying derived class variable var_derived "<<var_derived<<endl;
            cout<<"2.Displaying derived class variable var_base  "<<var_base <<endl;
        }
};


int main()
{
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    
    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
}