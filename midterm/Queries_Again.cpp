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

void print(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
    print(head);
    print_reverse(tail);
}

void insert_tail(Node *head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;

    print(head);
    print_reverse(tail);
}

void insert(Node *&head, Node *&tail, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;

    if (pos > size(head))
    {
        cout << "Invalid" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        newnode->next->prev = newnode;
        tmp->next = newnode;
        newnode->prev = tmp;
    }
    print(head);
    print_reverse(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q, x, v;
    cin >> q;

    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x == size(head))
        {
            insert_tail(head, tail, v);
        }
        else
        {
            insert(head, tail, x, v);
        }
    }

    return 0;
}
