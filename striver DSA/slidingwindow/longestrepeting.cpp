#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;




class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
    int left = 0, maxFreq = 0, maxLen = 0;

    for (int right = 0; right < s.size(); ++right) {
        count[s[right] - 'A']++;
        maxFreq = max(maxFreq, count[s[right] - 'A']);

        int windowSize = right - left + 1;

        // If more than k changes needed, shrink window
        if (windowSize - maxFreq > k) {
            count[s[left] - 'A']--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
    }
};
int main(){
    Solution sol;
    string s =" AABABBA";
    int k =1;
    cout<<sol.characterReplacement(s,k)<<endl;
    return 0;
}