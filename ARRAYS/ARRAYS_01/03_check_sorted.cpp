#include <iostream>
#include <vector>
using namespace std;

// Added 'const' to ensure the function doesn't modify the input array
bool check_sorted(const vector<int>& arr) {
    // If the array is empty or has one element, it's sorted by default
    if (arr.size() <= 1) return true;

    // Loop until size - 1 to ensure arr[i+1] is always valid
    for (int i = 0; i < arr.size() - 1; i++) {
        // If the current element is greater than the next one, it's not sorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    // If the loop finishes, no out-of-order elements were found
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    bool result = check_sorted(arr);

    // Printing the result: 1 means true (sorted), 0 means false (not sorted)
    if (result) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is NOT sorted." << endl;
    }

    return 0;
}