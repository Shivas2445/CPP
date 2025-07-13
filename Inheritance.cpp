#include<iostream>
using namespace std;

// Base class
class employee {
public:
    int id;
    float salary;

    employee(int inpid) {
        id = inpid;
        salary = 34.0;
    }

    float getSalary() {
        return salary;
    }

    int getId() {
        return id;
    }
};

// Derived class
class programmer : public employee {
public:
    programmer(int inpid) : employee(inpid) {
        int id;
        id=inpid;
        salary = 334.0; // Override base salary for programmer
    }

    void getdata() {
        cout << "ID = " << id << endl;
        cout << "Salary = " << salary  << endl;
    }
};

int main() {
    employee shiva(1), vaishnavi(2);

    cout << "Shiva's Salary: " << shiva.getSalary() << endl;
    cout << "Vaishnavi's Salary: " << vaishnavi.getSalary() << endl;

    programmer codeGuy(3);
    codeGuy.getdata(); // prints ID and Salary properly

    return 0;
}
