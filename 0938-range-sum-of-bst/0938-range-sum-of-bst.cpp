/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    void fun(TreeNode* root){
        if(root == NULL)
            return ;
        
        fun(root->left);
        ans.push_back(root->val);
        fun(root->right);
        return;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0;
        fun(root);
        for( int i = 0 ; i < ans.size(); i++){
            if(ans[i] >= low and ans[i] <= high){
                res = res + ans[i];
            }
        }
        return res;
    }
};