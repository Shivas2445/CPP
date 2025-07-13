#include<iostream>
using namespace std;
 
int main(){
    for (int i = 0; i < 4; i++)
    {   
        if(i == 2)
        {
            continue;
        }
        else if(i == 3)  // Moved `else if` to directly follow the `if`
        {
            break;
        }

        cout << i << endl;
    }
    
    return 0;
}
