#include<iostream>
using namespace std;

class student
{
protected:
    int roll_num;
public:
    void set_num(int);
    void get_num(void);
};

void student :: set_num(int r)
{
    roll_num=r;
}
void student ::get_num(void)
{
    cout<<"The Roll Number is = "<<roll_num<<endl;

}

class exam : public student
{

protected:
    float maths;
    float physics;

public:
    void set_marks(float , float );
    void get_marks(void);
};

void exam :: set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}

void exam :: get_marks(void)
{
    cout<<"The marks obtained in maths are :"<<maths<<endl;
    cout<<"The marks obtained in Physics are :"<<physics<<endl;
}

class result : public exam
{
    float percen;
public:
    void display()
    {
        percen = (maths + physics)/2;
        get_num();
        get_marks();
        cout<<"Your percentage is :"<<percen<<endl;

    }
};

int main()
{
    result r;
    r.set_num(420);
    r.set_marks(98.0, 87.0);
    r.display();


}
