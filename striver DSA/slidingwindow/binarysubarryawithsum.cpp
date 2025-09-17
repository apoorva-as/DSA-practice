#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;



class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return process(nums, goal) - process(nums,goal-1);
    }


private:
    int process(vector<int>& nums, int goal) {
        if(goal<0)return 0;
        int n = nums.size();
        int l=0,sum=0, count=0;

        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
          
            count+=r-l+1;
             
        }
        return count;
    }
};


int main(){
    Solution sol;
    vector<int> arr = {1,0,1,0,1};
    int goal = 2;
    cout << sol.numSubarraysWithSum(arr, goal) << "\n";  // expected 4
    return 0;
}
