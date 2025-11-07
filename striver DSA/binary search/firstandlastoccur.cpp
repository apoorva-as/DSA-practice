#include <bits/stdc++.h>
using namespace std;

pair<int, int> findFirstAndLast(vector<int>& arr, int x) {
    int n = arr.size();
    int first = -1, last = -1;
    int low = 0, high = n - 1;

    // Find first occurrence
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1; // move left
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1; // move right
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return {first, last};
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;
    
    pair<int, int> ans = findFirstAndLast(arr, x);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}
