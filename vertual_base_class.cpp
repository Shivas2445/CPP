#include<iostream>
using namespace std;

class student
{
protected:
    int roll_no;
public:
    void set_num(int a)
    {
        roll_no=a;
    }
    void print_number()
    {
        cout<<"Your roll no =" <<roll_no<<endl;
    }
};
class test : virtual public student
{
protected:
    float maths,physics;
public:
    void set_marks(float m1, float m2)
    {
        maths=m1;
        physics=m2;
    }
    void print_marsk()
    {
        cout<<"Your result is here :"<<endl
        <<"Maths ="<<maths<<endl
        <<"Physics ="<<physics<<endl;

    }
};

class sports: virtual public student
{
protected:
    float score;
public:
    void set_score(float sc)
    {
        score=sc;

    }
    void print_score(void)
    {
        cout<<"Your PT score is "<<score<<endl;

    }
};
class result : public test , public sports
{
private:
    float total;
public:
    void display()
    {
        total=maths+physics+score;
        print_number();
        print_marsk();
        print_score();
        cout<<"Your Result is :"<< total<<endl;
    }
};

int main()
{

    result r;
    r.set_num(4200);
    r.set_marks(98.0,86.0);
    r.set_score(98);
    r.display();
    return 0;
}
