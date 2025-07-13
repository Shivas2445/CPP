#include<iostream>
using namespace std;

class employee
{
    int id;
    int salary;
public:
    void setid()
    {
        salary =122;
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;

    }

    void getid()
    {
        cout<<"The ID of this employee is :"<<id<<"salary :"<<salary<<endl;


    }
};
int main()
{

    employee tata[4];
    for(int i=0; i<4; i++)
    {
        tata[i].setid();
        tata[i].getid();
    }

}
