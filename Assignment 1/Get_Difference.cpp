#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int maximum_list(Node *head)
{
    int mx = INT_MIN;
    while (head != NULL)
    {
        if (head->val > mx)
        {
            mx = head->val;
        }
        head = head->next;
    }
    return mx;
}
int minimum_list(Node *head)
{
    int mn = INT_MAX;
    while (head != NULL)
    {
        if (head->val < mn)
        {
            mn = head->val;
        }
        head = head->next;
    }
    return mn;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    // print(head);
    int mx = maximum_list(head);
    // cout<<mx<<endl;
    int mn = minimum_list(head);
    // cout<<mn<<endl;
    int def = mx - mn;
    cout << def << endl;
    return 0;
}