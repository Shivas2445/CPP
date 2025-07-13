#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"The id of the item is "<<id<<endl;
        cout<<"The price of the item is "<<price<<endl;
    }
};

int main()
{
    int size=3;
    shop *ptr = new shop[size];
    int p;
    float q;
    for(int i=0; i<size; i++){
        cout << "Enter Id and Price of item " << i+1 << endl;
        cin >> p >> q;
        ptr[i].setdata(p, q);
    }
    for(int j=0; j<size; j++){
        cout << "Item Number: " << j+1 << endl;
        ptr[j].getdata();
    }
    delete[] ptr; // Good practice to free memory
    return 0;
}

