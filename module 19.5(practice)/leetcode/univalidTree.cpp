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

    void check_value(TreeNode *root,int num,bool &flag)
    {
        if(root == NULL) return;
        if(root->val != num)
        flag = false;

        check_value(root->left,num,flag);
        check_value(root->right,num,flag);
    }
    bool isUnivalTree(TreeNode* root) {
        int num = root->val;
        bool flag  = true;
        check_value(root,num,flag);
        return flag;
     
    }
};