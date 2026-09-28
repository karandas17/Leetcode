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
    bool fun(TreeNode*root1,TreeNode*root2){
        #define null NULL
        if(root1 == null and root2 == null)
            return true;
        if(root1 == null or root2 == null)
            return false;
        if(root1->val != root2->val)
            return false;


        bool r1 = fun(root1->left,root2->right);
        bool r2 = fun(root1->right,root2->left);

        return r1 and r2;
    }
    bool isSymmetric(TreeNode* root) {
        return fun(root->left,root->right);
    }
};