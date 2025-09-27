#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // --- Recursive helpers ---

    void preorderHelper(TreeNode* root, vector<int> &arr) {
        if (!root) return;
        arr.push_back(root->val);
        preorderHelper(root->left, arr);
        preorderHelper(root->right, arr);
    }

    void inorderHelper(TreeNode* root, vector<int> &arr) {
        if (!root) return;
        inorderHelper(root->left, arr);
        arr.push_back(root->val);
        inorderHelper(root->right, arr);
    }

    void postorderHelper(TreeNode* root, vector<int> &arr) {
        if (!root) return;
        postorderHelper(root->left, arr);
        postorderHelper(root->right, arr);
        arr.push_back(root->val);
    }


    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        preorderHelper(root, arr);
        return arr;
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inorderHelper(root, arr);
        return arr;
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        postorderHelper(root, arr);
        return arr;
    }
};


int main() {
    

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    Solution sol;

    vector<int> pre = sol.preorderTraversal(root);
    cout << "Preorder (recursive): ";
    for (int v : pre) cout << v << " ";
    cout << "\n";

    vector<int> in = sol.inorderTraversal(root);
    cout << "Inorder (recursive): ";
    for (int v : in) cout << v << " ";
    cout << "\n";

    vector<int> post = sol.postorderTraversal(root);
    cout << "Postorder (recursive): ";
    for (int v : post) cout << v << " ";
    cout << "\n";

    

    return 0;
}
