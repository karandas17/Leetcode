class Solution {
public:

    vector<int> ans;

    void fun(TreeNode* node) {
        if (node == nullptr)
            return;

        fun(node->left);

        ans.push_back(node->val);

        fun(node->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        fun(root);
        return ans;
    }
};