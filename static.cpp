#include<iostream>
using namespace std;
 

class employee{
    public:
        int id;
        static int count;
        void setdata(void){
            cout<<"Ente the id "<<endl;
            cin >> id;
            count++;
        }
        void displaydata(void){
            cout << "Employee ID: " << id << endl;
            cout << "Total Employees: " << count << endl;
        
        }
};
int employee::count; // Definition of static member variable
int main(){
    employee shiva,shivani,vaishnavi;
    shiva.setdata();
    shiva.displaydata();

    shivani.setdata();  
    shivani.displaydata();

    vaishnavi.setdata();
    vaishnavi.displaydata();
   return 0;
}