#include<iostream>
using namespace std;
 
typedef struct employee
{
    /* data */
    int eid;//4
    char favchar;//1
    float salary;//4
} ep;

union money
{
    /* data */
    int rice; //4
    char car;//1
    float pounds;//4
};

// unien is like structer but they provieds better memory manegment

int main(){
    //struct employee shiva;
    ep shiva;
    shiva.eid=1;
    shiva.favchar='s';

    shiva.salary=120000;
    cout<<"The value is: "<<shiva.salary<<endl;
    cout<<"The value is: "<<shiva.favchar<<endl;
    cout<<"The value is: "<<shiva.eid<<endl;


    union money m1;
    m1.rice =34;
    //m1.car ='c';

    cout<<m1.rice<<endl;


    //enum

    enum meal{ breakfast , lunch ,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    
   return 0;
}