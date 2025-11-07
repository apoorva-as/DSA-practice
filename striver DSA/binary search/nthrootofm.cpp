#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
  int func(int mid ,int n ,int m){
    long long ans = 1;
    for(int i = 1; i<=n; i++){
        ans = ans * mid;
        if(ans > m) return 2;
      }
      if (ans == m) return 1;
      return 0;
  }
  
    int nthRoot(int n, int m) {
        // Code here
        int low = 1;
        int high = m;
        while(low<= high){
            int mid = (low+mid)/2;
            int midN = func (mid , n , m);
            if(midN == 1){
                return mid ;
            }
            else if(midN == 0) low = mid+1;
            else high = mid -1;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int n = 3; // Example: cube root
    int m = 69; // Example number
    int result = sol.nthRoot(n, m);
    if (result != -1) {
        cout << "The " << n << "th root of " << m << " is: " << result << endl;
    } else {
        cout << m << " does not have an integer " << n << "th root." << endl;
    }
    return 0;
}