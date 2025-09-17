#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256, -1);
        int left = 0, right = 0;
        int n = s.size();
        int len = 0;
        while (right < n) {
            if (mpp[s[right]] != -1) {
                left = max(mpp[s[right]] + 1, left);
            }
            mpp[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int result = sol.lengthOfLongestSubstring(input);
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    return 0;
}
