#include<iostream>
#include<cmath>
using namespace std;


class simplecalculator
{
    int a,b;
public:
    void get_data(){
        cout<<"Enter the values of a"<<endl;
        cin>>a;
        cout<<"Enter the values of b"<<endl;
        cin>>b;
    }
     void performOperations()
    {
        cout<<"The value of a + b = "<<a+b<<endl;
        cout<<"The value of a - b = "<<a-b<<endl;
        cout<<"The value of a * b = "<<a*b<<endl;
        cout<<"The value of a / b = "<<a/b<<endl;
    }
};
class scientific_calculator
{
     int a,b;
public:
    void get_data(){
        cout<<"Enter the values of a"<<endl;
        cin>>a;
        cout<<"Enter the values of b"<<endl;
        cin>>b;
    }

     void performOperationscientific()
    {
        cout<<"The value of cos(a) = "<<cos(a)<<endl;
        cout<<"The value of sin(a) = "<<sin(a)<<endl;
        cout<<"The value of exp(a) = "<<exp(a)<<endl;
        cout<<"The value of tan(a) = "<<tan(a)<<endl;
    }

};

class hybrid_calculator : public simplecalculator , public scientific_calculator
{

};

int main()
{
    simplecalculator c;
    c.get_data();
    c.performOperations();

    scientific_calculator s;
    s.get_data();
    s.performOperationscientific();
    return 0;

    hybrid_calculator H;
    H.simplecalculator :: get_data();
    H.performOperations();
    H.performOperationscientific();
}

#include<iostream>
#include<cmath>
using namespace std;


class simplecalculator
{
    int a,b;
public:
    void get_data(){
        cout<<"Enter the values of a"<<endl;
        cin>>a;
        cout<<"Enter the values of b"<<endl;
        cin>>b;
    }
     void performOperations()
    {
        cout<<"The value of a + b = "<<a+b<<endl;
        cout<<"The value of a - b = "<<a-b<<endl;
        cout<<"The value of a * b = "<<a*b<<endl;
        cout<<"The value of a / b = "<<a/b<<endl;
    }
};
class scientific_calculator
{
     int a,b;
public:
    void get_data(){
        cout<<"Enter the values of a"<<endl;
        cin>>a;
        cout<<"Enter the values of b"<<endl;
        cin>>b;
    }

     void performOperationscientific()
    {
        cout<<"The value of cos(a) = "<<cos(a)<<endl;
        cout<<"The value of sin(a) = "<<sin(a)<<endl;
        cout<<"The value of exp(a) = "<<exp(a)<<endl;
        cout<<"The value of tan(a) = "<<tan(a)<<endl;
    }

};

class hybrid_calculator : public simplecalculator , public scientific_calculator
{

};

int main()
{
    simplecalculator c;
    c.get_data();
    c.performOperations();

    scientific_calculator s;
    s.get_data();
    s.performOperationscientific();
    return 0;

    hybrid_calculator H;
    H.simplecalculator :: get_data();
    H.performOperations();
    H.performOperationscientific();
}
