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
    int res=0;
    int findsum(TreeNode* root)
    {
        if (root == NULL) return 0;
        int l = findsum(root->left);
        int r = findsum(root->right);
        res +=abs(l-r);

        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        findsum(root);
        return res;
        
    }
};