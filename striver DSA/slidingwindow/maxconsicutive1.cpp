#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int left = 0, right = 0;
//         int zero = 0;
//         int maxlen = 0;

//         while (right < nums.size()) {
//             if (nums[right] == 0) zero++;

//             while (zero > k) {
//                 if (nums[left] == 0) zero--;
//                 left++;
//             }

//             int len = right - left + 1;
//             maxlen = max(maxlen, len);
//             right++;
//         }

//         return maxlen;
//     }
// };


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zeroCount = 0, maxlen = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) zeroCount++;

            // Instead of a while-loop, we use an if to check invalidity,
            // but we ensure that left always moves when needed.
            if (zeroCount > k) {
                if (nums[left] == 0) zeroCount--;
                left++;
            }

            // At this point, window [left .. right] is guaranteed to
            // have zeroCount ≤ k. Update maxlen.
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};
int main(){
Solution sol;
    int n, k;
    cout << "Enter n (size of array) and k: ";
    cin >> n >> k;
    vector<int> nums(n);
    cout << "Enter " << n << " elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int result = sol.longestOnes(nums, k);
    cout << "Length of the longest subarray with at most " << k
         << " zeros: " << result << endl;
    return 0;
}