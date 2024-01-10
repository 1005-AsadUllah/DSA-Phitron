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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;

        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void print_left_to_right(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void print_right_to_left(Node *tail)
{
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
void insert_at_position(Node *head, int p, int v)
{
    Node *newnode = new Node(v);
    for (int i = 0; i < p - 1; i++)
    {
        head = head->next;
    }
    newnode->next = head->next;
    head->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = head;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    Node *tail = b;
    int pos, val;
    cin >> pos >> val;


    if (pos > size(head))
    {
        cout << "Not Possible" << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else 
    insert_at_position(head,pos,val);

    print_left_to_right(head);
    print_right_to_left(tail);
    return 0;
}