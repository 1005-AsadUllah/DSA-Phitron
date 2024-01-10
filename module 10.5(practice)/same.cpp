#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int size(Node *head)
{
    int cnt = 1;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
int same_check(Node *head1, Node *head2)
{
    if (size(head1) == size(head2))
    {
        while (head1 != NULL)
        {
            if (head1->val != head2->val)
            {
                return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return 1;
    }
    else
        return 0;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head1, tail1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val);
    }
    if (same_check(head1, head2) == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}