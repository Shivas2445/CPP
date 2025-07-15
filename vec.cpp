// C++ Vector Reference Notes
// -----------------------------------
// This file demonstrates the most common operations on std::vector in C++.
// Each section is commented for clarity. Use this as a reference for learning vectors.

#include <iostream>
#include <vector>
using namespace std;

// Function to display a vector of any type
template <class T>
void display(const vector<T>& v) {
    cout << "[ ";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << " ]" << endl;
}

int main() {
    // 1. Initialization
    vector<int> v1; // Empty vector
    vector<int> v2(5); // Vector of size 5, default-initialized (all 0)
    vector<int> v3(5, 10); // Vector of size 5, all elements 10
    vector<int> v4 = {1, 2, 3, 4, 5}; // List initialization
    vector<int> v5(v4); // Copy constructor

    cout << "Initialization examples:" << endl;
    display(v1);
    display(v2);
    display(v3);
    display(v4);
    display(v5);
    cout << endl;

    // 2. Adding elements
    v1.push_back(100);
    v1.push_back(200);
    v1.push_back(300);
    cout << "After push_back:" << endl;
    display(v1);
    cout << endl;

    // 3. Accessing elements
    cout << "Element at index 1 (v1[1]): " << v1[1] << endl;
    cout << "Element at index 2 (v1.at(2)): " << v1.at(2) << endl;
    cout << "First element (v1.front()): " << v1.front() << endl;
    cout << "Last element (v1.back()): " << v1.back() << endl;
    cout << endl;

    // 4. Inserting elements
    v1.insert(v1.begin() + 1, 999); // Insert 999 at index 1
    cout << "After insert at index 1:" << endl;
    display(v1);
    cout << endl;

    // 5. Deleting elements
    v1.pop_back(); // Remove last element
    v1.erase(v1.begin() + 1); // Remove element at index 1
    cout << "After pop_back and erase at index 1:" << endl;
    display(v1);
    cout << endl;

    // 6. Iterating over a vector
    cout << "Iterating with range-based for loop:" << endl;
    for (int x : v4) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Iterating with iterator:" << endl;
    for (vector<int>::iterator it = v4.begin(); it != v4.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl << endl;

    // 7. Size and capacity
    cout << "Size of v4: " << v4.size() << endl;
    cout << "Capacity of v4: " << v4.capacity() << endl;
    cout << endl;

    // 8. Clearing and checking empty
    v1.clear();
    cout << "After clear, is v1 empty? " << (v1.empty() ? "Yes" : "No") << endl;
    cout << endl;

    // 9. Swapping vectors
    cout << "Before swap:" << endl;
    display(v3);
    display(v4);
    v3.swap(v4);
    cout << "After swap:" << endl;
    display(v3);
    display(v4);
    cout << endl;

    // 10. 2D Vectors (vector of vectors)
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "2D Vector (matrix):" << endl;
    for (const auto& row : matrix) {
        display(row);
    }
    cout << endl;

    // 11. Vector of custom type
    struct Point {
        int x, y;
    };
    vector<Point> points = { {1,2}, {3,4}, {5,6} };
    cout << "Vector of custom struct Point:" << endl;
    for (const auto& p : points) {
        cout << "(" << p.x << ", " << p.y << ") ";
    }
    cout << endl;

    // End of vector reference notes
    return 0;
}