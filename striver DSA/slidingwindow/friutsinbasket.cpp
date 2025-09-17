#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int totalElements(vector<int> &arr) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        unordered_map<int,int> mapp;

        while (right < arr.size()) {
            mapp[arr[right]]++;

            // If more than 2 distinct elements, shrink from left
            while (mapp.size() > 2) {
                mapp[arr[left]]--;
                if (mapp[arr[left]] == 0) {
                    mapp.erase(arr[left]);
                }
                left++;
            }

            // Now window [left..right] has at most 2 distinct elements
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 1, 2, 3};
    int result = sol.totalElements(arr);
    cout << "Length of longest subarray with at most 2 distinct elements: " << result << endl;
    return 0;
}
