#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int rows, cols;
    char character;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter the character: ";
    cin >> character;
    int space = rows - 1;

    cols = rows-(rows-1);

    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < space; j++) {
            cout << " "; 
        }
        space--;
        for (int j = 0; j < cols; j++) {
            cout <<character;


        }
        cols= cols+2;
        cout << endl;
    }

    return 0;
}
