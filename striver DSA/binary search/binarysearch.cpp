#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int low = 0;
//         int high = nums.size() - 1;            // use size(), not length, and high not “heigh”
//         while (low <= high) {
//             int mid = low + (high - low) / 2;  // better avoid (low+high)/2 to prevent overflow
//             if (nums[mid] == target) {
//                 return mid;
//             } else if (nums[mid] < target) {    // you compared target > mid, but you should compare target with nums[mid]
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;                 // you had “height = mid-1” which is a typo
//             }
//         }
//         return -1;
//     }
// };


//recursive approach----------------------

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return searchRec(nums, 0, nums.size() - 1, target);
    }

private:
    int searchRec(const vector<int>& nums, int low, int high, int target) {
        if (low > high) {
            return -1;
        }
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            return searchRec(nums, mid + 1, high, target);
        } else {
            return searchRec(nums, low, mid - 1, target);
        }
    }
};

int main() {
    // Example usage:
    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int result = sol.search(nums, target);
    // result should be 4
    cout << result << endl;
    return 0;
}