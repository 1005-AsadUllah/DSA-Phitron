#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree(void)
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1.ber kora
        Node *f = q.front();
        q.pop();

        // 2.ja kaj ace
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        // connection
        f->left = left;
        f->right = right;

        // 3.children gule push koro

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void sum(Node * root,int &s)
{
    if(root == NULL)
    return ;
    if(root->left != NULL || root->right != NULL)
    {
        s+= root->val;
    }
    sum(root->left,s);
    sum(root->right,s);

}

int main()
{
    Node *root = input_tree();
    int s =0;
    sum(root,s);
    cout<<s<<endl;


    return 0;
}