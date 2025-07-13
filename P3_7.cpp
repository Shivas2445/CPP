#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Binary Search Function
bool binarySearch(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main() {
    vector<int> requested_ids = {1023, 1001, 1010, 1050, 1030};
    vector<int> delivered_ids = {1001, 1010, 1030};
    vector<int> not_delivered;

    // Sort requested_ids
    sort(requested_ids.begin(), requested_ids.end());

    cout << "Sorted Requested IDs:\n";
    for (int id : requested_ids) {
        cout << id << " ";
    }
    cout << "\n";

    // Check which requested_ids are not in delivered_ids
    for (int req_id : requested_ids) {
        if (!binarySearch(delivered_ids, req_id)) {
            not_delivered.push_back(req_id);
        }
    }

    // Print non-delivered IDs
    cout << "\nNot Delivered IDs:\n";
    for (int id : not_delivered) {
        cout << id << " ";
    }

    // Find and print the lowest not-delivered ID
    if (!not_delivered.empty()) {
        int min_id = *min_element(not_delivered.begin(), not_delivered.end());
        cout << "\n\nLowest Not Delivered ID: " << min_id << endl;
    } else {
        cout << "\n\nAll requested IDs were delivered." << endl;
    }

    return 0;
}
