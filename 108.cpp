class Solution {
public:
    TreeNode* build(vector<int>& nums, int left, int right) {

        // Base case: no elements
        if(left > right)
            return NULL;

        // Find middle element
        int mid = (left + right) / 2;

        // Create root node
        TreeNode* root = new TreeNode(nums[mid]);

        // Recursively build left subtree
        root->left = build(nums, left, mid - 1);

        // Recursively build right subtree
        root->right = build(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        return build(nums, 0, nums.size() - 1);
    }
};
