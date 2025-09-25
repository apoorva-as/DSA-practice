#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n < m) return "";
        
        vector<int> need(128, 0);
        for (char c : t) need[c]++;
        
        vector<int> window(128, 0);
        int have = 0;
        int required = 0; 
        for (int c = 0; c < 128; c++) {
            if (need[c] > 0) required++;
        }
        
        int l = 0;
        int minLen = INT_MAX;
        int startIdx = -1;
        
        for (int r = 0; r < n; r++) {
            char c = s[r];
            window[c]++;
            
            if (need[c] > 0 && window[c] == need[c]) {
                have++;
            }
            
            while (have == required) {
                int curLen = r - l + 1;
                if (curLen < minLen) {
                    minLen = curLen;
                    startIdx = l;
                }
                
                char d = s[l];
                window[d]--;
                if (need[d] > 0 && window[d] < need[d]) {
                    have--;
                }
                l++;
            }
        }
        
        return (startIdx == -1) ? "" : s.substr(startIdx, minLen);
    }
};

int main() {
    Solution sol;
    
    string s = "ADOBECODEBANC";
    string t = "ABC";
    
    cout << "Minimum window substring: " << sol.minWindow(s, t) << endl;
    
    return 0;
}
