
using namespace std;

// Function to display a list of any type
template <class T>
void display(const list<T>& l) {
    cout << "[ ";
    for (const auto& elem : l) {
        cout << elem << " ";
    }
    cout << "]" << endl;
}

int main() {
    // 1. Initialization
    list<int> l1; // Empty list
    list<int> l2(5); // List of size 5, default-initialized (all 0)
    list<int> l3(5, 10); // List of size 5, all elements 10
    list<int> l4 = {1, 2, 3, 4, 5}; // List initialization
    list<int> l5(l4); // Copy constructor

    cout << "Initialization examples:" << endl;
    display(l1);
    display(l2);
    display(l3);
    display(l4);
    display(l5);
    cout << endl;

    // 2. Adding elements
    l1.push_back(100);
    l1.push_back(200);
    l1.push_front(50);
    cout << "After push_back and push_front:" << endl;
    display(l1);
    cout << endl;

    // 3. Accessing elements (front and back)
    cout << "First element (l1.front()): " << l1.front() << endl;
    cout << "Last element (l1.back()): " << l1.back() << endl;
    cout << endl;

    // 4. Inserting elements
    auto it = l1.begin();
    ++it; // Move iterator to second position
    l1.insert(it, 999); // Insert 999 at second position
    cout << "After insert at second position:" << endl;
    display(l1);
    cout << endl;

    // 5. Deleting elements
    l1.pop_back(); // Remove last element
    l1.pop_front(); // Remove first element
    it = l1.begin();
    l1.erase(it); // Remove element at current iterator position
    cout << "After pop_back, pop_front, and erase:" << endl;
    display(l1);
    cout << endl;

    // 6. Iterating over a list
    cout << "Iterating with range-based for loop:" << endl;
    for (int x : l4) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Iterating with iterator:" << endl;
    for (list<int>::iterator it = l4.begin(); it != l4.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl << endl;

    // 7. Size and empty
    cout << "Size of l4: " << l4.size() << endl;
    cout << "Is l4 empty? " << (l4.empty() ? "Yes" : "No") << endl;
    cout << endl;

    // 8. Clearing and assigning
    l1.clear();
    cout << "After clear, is l1 empty? " << (l1.empty() ? "Yes" : "No") << endl;
    l1.assign(3, 42); // Assign 3 elements of value 42
    cout << "After assign(3, 42):" << endl;
    display(l1);
    cout << endl;

    // 9. Swapping lists
    cout << "Before swap:" << endl;
    display(l3);
    display(l4);
    l3.swap(l4);
    cout << "After swap:" << endl;
    display(l3);
    display(l4);
    cout << endl;

    // 10. Removing elements by value
    l3.remove(10); // Remove all elements with value 10
    cout << "After remove(10) from l3:" << endl;
    display(l3);
    cout << endl;

    // 11. Sorting and reversing
    l4.sort();
    cout << "l4 after sort():" << endl;
    display(l4);
    l4.reverse();
    cout << "l4 after reverse():" << endl;
    display(l4);
    cout << endl;

    // 12. Merging lists (sorted)
    list<int> l6 = {2, 4, 6};
    list<int> l7 = {1, 3, 5};
    l6.merge(l7); // Both lists should be sorted before merge
    cout << "After merge, l6:" << endl;
    display(l6);
    cout << "l7 (should be empty):" << endl;
    display(l7);
    cout << endl;

    // 13. List of custom type
    struct Point {
        int x, y;
    };
    list<Point> points = { {1,2}, {3,4}, {5,6} };
    cout << "List of custom struct Point:" << endl;
    for (const auto& p : points) {
        cout << "(" << p.x << ", " << p.y << ") ";
    }
    cout << endl;

    // End of list reference notes
    return 0;
}