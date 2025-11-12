#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();           // number of rows
        int n = matrix[0].size();        // number of columns

        int low = 0;
        int high = m * n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int row = mid / n;           // convert mid to row index
            int col = mid % n;           // convert mid to column index

            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};

int main() {
    Solution obj;

    // Example matrix (sorted row-wise and column-wise)
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;
    cout << "Enter target value: ";
    cin >> target;

    bool found = obj.searchMatrix(matrix, target);

    if (found)
        cout << "Target " << target << " found in matrix ✅" << endl;
    else
        cout << "Target " << target << " not found in matrix ❌" << endl;

    return 0;
}
