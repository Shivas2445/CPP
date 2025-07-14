#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    string st="shiva";
    string st2;
    //opening files using constructer and writing it
    //ofstream out("sample.txt");
    //out<<st;
    //opening files using constructer and reading to it
    ifstream in("sample.txt");
    in>>st2;
    cout<<st2<<endl;

    
    return 0;
}