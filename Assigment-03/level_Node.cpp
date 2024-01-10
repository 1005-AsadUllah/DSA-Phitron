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
void levelNode(Node *root, vector<int> &v, int val)
{
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<Node *, int> p;
        p = q.front();
        Node *node = p.first;
        int level = p.second;
        q.pop();

        // kaj
        if (val == level)
            v.push_back(node->val);

        if (node->left)
            q.push({node->left, level + 1});

        if (node->right)
            q.push({node->right, level + 1});
    }
}
int main()
{
    Node *root = input_tree();
    vector<int> v;
    int val;
    cin >> val;
    val++;
    levelNode(root, v, val);

    if (v.empty())
        cout << "Invalid" << endl;
    else
    {
        for (auto it = v.begin(); it < v.end(); it++)
            cout << *it << " ";
    }

    return 0;
}