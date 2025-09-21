#include <iostream>
#include <string>
#include <algorithm>  // for std::min
using namespace std;

class Solution {
public:
    long long numberOfSubstrings(const string &s) {
        int lastseen[3] = { -1, -1, -1 };
        long long cnt = 0;

        for (int i = 0; i < (int)s.length(); i++) {
            char c = s[i];
            // assume input only contains 'a', 'b', 'c'
            lastseen[c - 'a'] = i;

            if (lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1) {
                int m = min(lastseen[0], min(lastseen[1], lastseen[2]));
                cnt += (long long)(m + 1);
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;

    string s = "abcabc";
    long long result = sol.numberOfSubstrings(s);
    cout << result << endl;

    return 0;
}
