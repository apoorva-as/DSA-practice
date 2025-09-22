#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        // If k is 0 (rarely), or empty array
        if (k == 0 || n == 0) return 0;
        // If k >= n, take all
        if (k >= n) {
            int tot = 0;
            for (int x : cardPoints) tot += x;
            return tot;
        }

        // 1. sum of first k elements (all from left)
        int leftSum = 0;
        for (int i = 0; i < k; i++) {
            leftSum += cardPoints[i];
        }
        int maxSum = leftSum;

        // 2. Now try replacing i cards from left with from right
        // i goes from 1 to k
        int rightSum = 0;
        for (int i = 1; i <= k; i++) {
            // Remove the (k - i)-th card from left (0-based indexing)
            leftSum -= cardPoints[k - i];
            // Add the i-th card from right
            rightSum += cardPoints[n - i];
            // Update
            maxSum = max(maxSum, leftSum + rightSum);
        }

        return maxSum;
    }
};



int main() {
 
    int n, k;
    // Read number of cards (n) and how many to take (k)
    cin >> n >> k;
    vector<int> cardPoints(n);
    for (int i = 0; i < n; i++) {
        cin >> cardPoints[i];
    }

    Solution sol;
    int result = sol.maxScore(cardPoints, k);
    cout << result << "\n";

    return 0;
}
