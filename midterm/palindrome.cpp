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
void insert(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int palindrome_list(Node *head, Node *tail)
{
    if (head == NULL)
        return 1;
    Node *i = head;
    Node *j = tail;
    while (i != j && i->prev != j)
    {
        if (i->val != j->val)
            return 0;
        i = i->next;
        j = j->prev;
    }
    return 1;
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
        {
            break;
        }
        insert(head, tail, val);
    }
    int n = palindrome_list(head, tail);
    if (n == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}