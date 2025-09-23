#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int atMostK(vector<int>& nums, int k) {
        int left = 0, answer = 0;
        unordered_map<int,int> freq;

        for (int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;
            
            while (freq.size() > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) freq.erase(nums[left]);
                left++;
            }
            answer += (right - left + 1);
        }
        return answer;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k-1);
    }
};

int main() {
    Solution sol;
    // Example test cases
    {
        vector<int> arr = {2,1,1,13,4,3,2};
        int k = 3;
        cout << "Expected 3, got: " << sol.subarraysWithKDistinct(arr, k) << "\n";
    }
   
 
}