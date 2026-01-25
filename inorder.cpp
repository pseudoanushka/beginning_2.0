class Solution {
public:
    vector<int> res;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);      // Left
        res.push_back(root->val); // Node
        inorder(root->right);     // Right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return res;
    }
};
