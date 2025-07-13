#include <iostream>
#include <string>
using namespace std;

class binery {
    string s;

public:
    void read(void);
    bool chk_binery(void);
    void ones(void);
    void display(void);
};

void binery::read(void) {
    while (true) {
        cout << "Enter the binary number:" << endl;
        cin >> s;

        if (chk_binery()) {
            break;
        } else {
            cout << "Incorrect binary number. Please enter a valid binary number." << endl;
        }
    }

    ones(); 
}

bool binery::chk_binery(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            return false;
        }
    }
    return true;
}

void binery::ones(void) {
    for (int i = 0; i < s.length(); i++) {
        s.at(i) = (s.at(i) == '0') ? '1' : '0';
    }
    display();
}

void binery::display(void) {
    cout << "Binary number after one's complement is: ";
    cout << s << endl;
}

int main() {
    binery b;
    b.read();
    return 0;
}
