#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int n = nums.size();
        int ans = n;  // default insert position = end

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                ans = mid;       // possible insert position
                high = mid - 1;  // move left
            } else {
                low = mid + 1;   // move right
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;

    cout << "Insert position: " << obj.searchInsert(nums, target) << endl;

    return 0;
}
