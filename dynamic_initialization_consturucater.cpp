#include <iostream>
using namespace std;

class bankdeposit {
    int principal;
    int year;
    float interestrate;
    float return_value;
public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); // r as float
    bankdeposit(int p, int y, int r);   // r as int (%)
    void show();
};

bankdeposit :: bankdeposit(int p, int y, float r) {
    principal = p;
    year = y;
    interestrate = r;
    return_value = principal;
    for (int i = 0; i < y; i++) {
        return_value = return_value * (1 + interestrate);
    }
}

bankdeposit :: bankdeposit(int p, int y, int r) {
    principal = p;
    year = y;
    interestrate = float(r) / 100;
    return_value = principal;
    for (int i = 0; i < y; i++) {
        return_value = return_value * (1 + interestrate); // ✅ Corrected from r to interestrate
    }
}

void bankdeposit :: show() {
    cout << "Principal amount was = " << principal
         << ". Return value after " << year
         << " years is = " << return_value << endl;
}

int main() {
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show(); // Will show garbage/default values

    cout << "Enter the value of p y and r (float): " << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R (int %): " << endl;
    cin >> p >> y >> R; // ✅ Now taking input for R correctly
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    return 0;
}
