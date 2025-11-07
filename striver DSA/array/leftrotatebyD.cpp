#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // handle cases where d > n
    
    vector<int> temp(arr.begin(), arr.begin() + d);
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 5, 4, 5};
    int d = 2;
    leftRotate(arr, d);

    for (int x : arr) cout << x << " ";
    return 0;
}
