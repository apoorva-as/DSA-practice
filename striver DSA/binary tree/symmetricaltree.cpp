#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    // Main function to check if the tree is symmetric
    bool isSymmetric(TreeNode* root) {
        if (!root) return true; // Empty tree is symmetric
        return isMirror(root->left, root->right);
    }

private:
    // Helper function to check if two trees are mirror of each other
    bool isMirror(TreeNode* leftNode, TreeNode* rightNode) {
        // Case 1: both null → symmetric
        if (!leftNode && !rightNode) return true;

        // Case 2: one null, one not → not symmetric
        if (!leftNode || !rightNode) return false;

        // Case 3: values differ → not symmetric
        if (leftNode->val != rightNode->val) return false;

        // Case 4: recursively check outer and inner pairs
        return isMirror(leftNode->left, rightNode->right) &&
               isMirror(leftNode->right, rightNode->left);
    }
};

// Driver code to test the function
int main() {
    /*
            1
          /   \
         2     2
        / \   / \
       3  4  4  3
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution sol;
    if (sol.isSymmetric(root))
        cout << "Tree is Symmetric ✅" << endl;
    else
        cout << "Tree is Not Symmetric ❌" << endl;

    return 0;
}
