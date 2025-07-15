// C++ std::map Reference Notes
// -----------------------------------
// This file demonstrates the most common operations on std::map in C++.
// Each section is commented for clarity. Use this as a reference for learning maps.

#include <iostream>
#include <map>
#include <string>
using namespace std;

// Function to display a map of any type
// (assumes key and value types support <<)
template <class K, class V>
void display(const map<K, V>& m) {
    cout << "{ ";
    for (const auto& pair : m) {
        cout << pair.first << ": " << pair.second << ", ";
    }
    cout << "}" << endl;
}

int main() {
    // 1. Initialization
    map<string, int> m1; // Empty map
    map<string, int> m2 = { {"apple", 2}, {"banana", 5}, {"orange", 3} }; // List initialization
    map<string, int> m3(m2); // Copy constructor

    cout << "Initialization examples:" << endl;
    display(m1);
    display(m2);
    display(m3);
    cout << endl;

    // 2. Inserting elements
    m1["cat"] = 10; // Insert using operator[]
    m1["dog"] = 20;
    m1.insert({"bird", 15}); // Insert using insert()
    cout << "After insertions:" << endl;
    display(m1);
    cout << endl;

    // 3. Accessing elements
    cout << "Value for key 'cat': " << m1["cat"] << endl;
    cout << "Value for key 'dog': " << m1.at("dog") << endl;
    // m1.at("notfound") would throw an exception if key not present
    cout << endl;

    // 4. Iterating over a map
    cout << "Iterating with range-based for loop:" << endl;
    for (const auto& pair : m2) {
        cout << pair.first << " => " << pair.second << endl;
    }
    cout << endl;

    // 5. Checking size and empty
    cout << "Size of m2: " << m2.size() << endl;
    cout << "Is m1 empty? " << (m1.empty() ? "Yes" : "No") << endl;
    cout << endl;

    // 6. Erasing elements
    m1.erase("cat"); // Erase by key
    auto it = m1.find("dog");
    if (it != m1.end()) m1.erase(it); // Erase by iterator
    cout << "After erasing 'cat' and 'dog':" << endl;
    display(m1);
    cout << endl;

    // 7. Searching for a key
    if (m2.find("banana") != m2.end()) {
        cout << "'banana' found in m2 with value: " << m2["banana"] << endl;
    } else {
        cout << "'banana' not found in m2" << endl;
    }
    cout << endl;

    // 8. Clearing a map
    m3.clear();
    cout << "After clear, is m3 empty? " << (m3.empty() ? "Yes" : "No") << endl;
    cout << endl;

    // 9. Updating values
    m2["apple"] += 10;
    cout << "After updating 'apple' in m2:" << endl;
    display(m2);
    cout << endl;

    // 10. Map of custom type (as value)
    struct Point {
        int x, y;
    };
    map<string, Point> points = {
        {"A", {1,2}},
        {"B", {3,4}},
        {"C", {5,6}}
    };
    cout << "Map with custom struct as value:" << endl;
    for (const auto& p : points) {
        cout << p.first << ": (" << p.second.x << ", " << p.second.y << ") ";
    }
    cout << endl;

    // End of map reference notes
    return 0;
}