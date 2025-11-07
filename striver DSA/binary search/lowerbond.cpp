#include <vector>
#include <iostream>
using namespace std;

int lowerBound(const vector<int>& arr, int target) {
    int low = 0;
    int high = (int)arr.size() - 1;
    int result = (int)arr.size();  // default to “not found” insertion-position
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            // mid might be the first position ≥ target
            result = mid;
            high = mid - 1;
        } else {
            // arr[mid] < target → go right
            low = mid + 1;
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int target = 4;
    
    int idx = lowerBound(arr, target);
    if (idx < (int)arr.size()) {
        cout << "First position with value >= " << target << " is index " << idx 
             << ", value = " << arr[idx] << endl;
    } else {
        cout << "No element ≥ " << target << " found; insertion position = " << idx << endl;
    }
    
    return 0;
}
