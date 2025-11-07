//better solutuion----------

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> st;
//         int n = nums.size();

//         for (int i = 0; i < n; i++) {
//             unordered_set<int> hashset;  // to check for complement values
//             for (int j = i + 1; j < n; j++) {
//                 int third = -(nums[i] + nums[j]);
//                 if (hashset.find(third) != hashset.end()) {
//                     vector<int> temp = {nums[i], nums[j], third};
//                     sort(temp.begin(), temp.end()); // ensure unique order
//                     st.insert(temp);
//                 }
//                 hashset.insert(nums[j]);
//             }
//         }

//         // convert set to vector
//         vector<vector<int>> ans(st.begin(), st.end());
//         return ans;
//     }
// };



//optimal solution------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());  // Step 1: Sort the array

        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // skip duplicates for i

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // skip duplicates for j and k
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                } 
                else if (sum < 0) {
                    j++; // need a larger sum
                } 
                else {
                    k--; // need a smaller sum
                }
            }
        }

        return ans;
    }
};
