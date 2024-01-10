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
void leaf(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left == NULL and root->right == NULL)
    {
        v.push_back(root->val);
    }
    leaf(root->left, v);
    leaf(root->right, v);
}

int main()
{
    Node *root = input_tree();
    vector<int> v;
    leaf(root, v);
    sort(v.begin(), v.end(), greater<int>());
    for (auto it = v.begin(); it < v.end(); it++)
        cout << *it << " ";

    return 0;
}