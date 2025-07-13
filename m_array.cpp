#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(){
        counter=0;
    }
        void getitem_price(){
        cout<<"enter the id of your item no"<<counter+1<<endl;
        cin>>itemid[counter];
        cout<<"enter the price of your item"<<endl;
        cin>>itemprice[counter];
        counter++;
    }
};
 
int main(){
    shop s;
    s.initcounter();
    s.getitem_price();
    s.getitem_price();
   return 0;
}