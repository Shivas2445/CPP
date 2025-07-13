#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // Not recommended to use the static function while using the inline fun
    // static int c=0; //this executes only once
    //  c= c+1; //Next time this function is run , the value of c will be retained

    return a * b;
}
float moneyreceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

int main()
{
    int a, b;
    cout << "enter the values of a and b" << endl;
    cin >> a >> b;
    cout << "the product of a and b is " << product(a, b) << endl;
    int money = 100000;
    cout << "if you have " << money << "rs in your bank account , you will recive " << moneyreceived(money) << "Rs after 1 year";

    return 0;
}