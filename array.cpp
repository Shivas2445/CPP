#include<iostream>
using namespace std;
 
int main(){
    int marks[4]={23,45,56,67};
    int mathmarks[4];
    mathmarks[0]=2234;
    mathmarks[1]=254;
    mathmarks[2]=346;
    mathmarks[3]=234;
    cout<<"****************using for loop*****************************"<<endl;

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<marks[i]<<endl;
        cout<<mathmarks[i]<<endl;
    }
    cout<<"****************using while loop**********************"<<endl;
    //using the while and do while 
    int i=0;
    while(i<4){
        cout<<marks[i]<<endl;
        cout<<mathmarks[i]<<endl;
        i++;
    }

    cout<<"********************using do while loop********************"<<endl;
    int j=0;
    do{
        cout<<marks[j]<<endl;
        cout<<mathmarks[j]<<endl;
        j++;
    }while(j<4);
  


    //points and arrays
    int *p=marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p=2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}