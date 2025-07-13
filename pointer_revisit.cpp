#include <iostream>
using namespace std;

int main(){
    int a=4;
    int* ptr = &a;

    cout<<"The value of a is " <<*(ptr)<<endl;
    cout<<"The address of a is " <<ptr<<endl;

    //New keyword.
    int* p=new int(40);

    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"The value at address p is "<<*p<<endl;
    
    int* arr =new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    // You cannot delete a particular element of a dynamically allocated array.
    // You can only delete the entire array using delete[] arr;
    // If you want to "remove" a particular element, you can set its value to 0 or some marker.
    // For demonstration, let's set arr[1] to 0 to "remove" it logically.
    //arr[1] = 0; // logically remove arr[1]

    delete[] arr;
    cout<<"The  value of arr[0] ,arr[1] and arr[2] is "<<endl<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;

    // When done, delete the whole array to free memory
    
}