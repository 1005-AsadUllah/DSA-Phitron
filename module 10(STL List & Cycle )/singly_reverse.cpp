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
void singly_reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    singly_reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int main()
{

    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    cout << "Linked List : ";
    singly_reverse(head, head);
    print(head);
    return 0;
}