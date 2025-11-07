#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(), arr.end()); // ensure sorted for binary search
        
        int n = arr.size();
        int floorVal = -1, ceilVal = -1;
        
        // Find floor (greatest element <= x)
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= x) {
                floorVal = arr[mid];
                low = mid + 1; // move right to find a larger floor
            } else {
                high = mid - 1;
            }
        }
        
        // Find ceil (smallest element >= x)
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                ceilVal = arr[mid];
                high = mid - 1; // move left to find smaller ceil
            } else {
                low = mid + 1;
            }
        }
        
        return {floorVal, ceilVal};
    }
};

int main() {
    Solution obj;
    vector<int> arr = {3, 4, 7, 8, 10};
    int x = 5;
    
    vector<int> ans = obj.getFloorAndCeil(x, arr);
    cout << "Floor: " << ans[0] << ", Ceil: " << ans[1] << endl;
    
    return 0;
}
