#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/


bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if(root->left == NULL and root->right == NULL) return true;
    if(root->left == NULL or root->right == NULL) return false;
    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    if(l == false or r == false) return false;
    else return true;
        // Write your code here.
}