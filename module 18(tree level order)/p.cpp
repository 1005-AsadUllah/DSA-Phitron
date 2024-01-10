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
int mx =0;
	int count_height(Node *root)
{
    if(root == NULL)
    return 0;
    int l = count_height(root->left);
    int r = count_height(root->right);
    int d = l+r;
    mx = max(mx,d);
    return max(l,r)+1;
}
int main()
{
    Node *root = input_tree();
    int h = count_height(root);
    cout<<max(h,mx)<<endl;
   

    return 0;
}