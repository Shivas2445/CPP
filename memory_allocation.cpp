#include<iostream>
using namespace std;

class shop{
    private:
        int item_id[100];
        int item_price[100];
        int counter=0;
    public:
        void setprice(void);
        void displayprice(void);
        
};

void shop :: setprice(void){
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the item id : ";
        cin >> item_id[counter];
        cout << "Enter the item price : ";
        cin >> item_price[counter];
        counter++;
    }
     cout << "Prices of items have been set successfully." << endl; 
    displayprice();
   
}

void shop :: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"Item ID: "<<item_id[i]<<" Item Price: "<<item_price[i]<<endl;
    }
}
 
int main(){
    shop s;
    s.setprice();
   return 0;
}