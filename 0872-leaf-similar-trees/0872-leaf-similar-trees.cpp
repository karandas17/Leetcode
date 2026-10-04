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
    vector<int> ans1;
    vector<int> ans2;
    void fun(TreeNode* root1,vector<int>&ans){
        if(root1 == NULL)
            return;
        
        if(root1->left == NULL and root1->right==NULL)
            ans.push_back(root1->val);
        
        fun(root1->left,ans);
        fun(root1->right,ans);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        fun(root1,ans1);
        fun(root2,ans2);
        return ans1 == ans2;
    }
};