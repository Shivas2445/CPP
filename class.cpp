#include<iostream>
using namespace std;


class employee{
   private:
      int a, b,c;
   public:
      int d,e;

      void setdata(int a,int b,int c); //Declaration
      void getdata()
      {
         cout<<"The value of a is :"<<a<<endl;
         cout<<"The value of b is :"<<b<<endl;
         cout<<"The value of c is :"<<c<<endl;
         cout<<"The value of d is :"<<d<<endl;
         cout<<"The value of e is :"<<e<<endl;

      }
}rohan;
void employee :: setdata(int a1,int b1, int c1){
   a=a1;
   b=b1;
   c=c1;
}

int main(){
   //employee shiva;
   rohan.setdata(1,2,3);
   rohan.d=4;
   rohan.e=5;
   rohan.getdata();
   return 0;
}