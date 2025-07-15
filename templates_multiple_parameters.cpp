#include <iostream>
using namespace std;


/* 
template<class t1,class t2>

*/
template <class t1,class t2>
class myclass
{
    public:
        t1 data1;
        t2 data2;

        myclass(t1 a, t2 b)
        {
            data1=a;
            data2=b;
        }
        void display()
        {
            cout<<endl<<this->data1<<endl<<this->data2;
        }

};
int main(){
    myclass<int,char> obj(1,'s');
    obj.display();
    myclass<int,float> obj1(1,2.3);
    obj1.display();
    return 0;
}