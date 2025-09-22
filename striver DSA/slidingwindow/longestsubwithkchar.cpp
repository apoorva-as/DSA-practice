#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestKSubstr(const string &s, int k) {
        int n = s.size();
        if (n == 0 || k == 0) return -1;  // if k == 0, by “exactly” definition, likely -1

        unordered_map<char, int> freq;
        int l = 0;
        int maxLen = -1;  // use -1 to indicate not found yet

        for (int r = 0; r < n; r++) {
            // include s[r]
            freq[s[r]]++;

            // shrink window if distinct > k
            while ((int)freq.size() > k) {
                char c = s[l];
                freq[c]--;
                if (freq[c] == 0) {
                    freq.erase(c);
                }
                l++;
            }

            // now window [l..r] has ≤ k distinct
            if ((int)freq.size() == k) {
                maxLen = max(maxLen, r - l + 1);
            }
        }

        return maxLen;
    }
};

int main() {
    string s;
    int k;
    cin >> s;
    cin >> k;
    Solution sol;
    cout << sol.longestKSubstr(s, k) << "\n";
    return 0;
}
