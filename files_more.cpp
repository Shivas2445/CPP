#include<iostream>
#include <fstream>

using namespace std;

int main()
{

    //connecting out file with hout stream
    ofstream hout("sample1.txt");


    /// creating a name string and filling it with the string entered by the user
    cout<<"Enter your name "<<endl;
    string name;
    cin>>name;

    hout<<name + " My name is ";

    hout.close();

    ifstream hin("sample1.txt");
    string content;
    hin>>content;

    cout<<"The content of the file is :"<<content<<endl;

    hin.close();

    return  0;
}