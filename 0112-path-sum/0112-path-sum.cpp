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
    #define null NULL
    bool ans = false;
    void fun(TreeNode*root, int sum,int target){
        if( root == null)
            return;
        
        sum += root->val;

        if( root->left == null and root->right == null){
            if( sum == target)
                ans = true;
                return;
        }
        fun(root->left,sum,target);
        fun(root->right,sum,target);
        return;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        fun(root,sum,targetSum);
        return ans;
    }
};