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
void delete_positon(Node *head, int pos)
{
    for (int i = 0; i < pos-1; i++)
    {
        head = head->next;
    }
    Node *deletenode = head->next;
    head->next = deletenode->next;
    head->next->prev = head;
    delete deletenode;
}
void delete_head(Node * & head){
    Node * deletenode = head;
    head = head->next;
    delete deletenode;
    head->prev=NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    Node *tail = c;
    // int pos, val;
    // cin >> pos;

    delete_head(head);

    print_left_to_right(head);
    print_right_to_left(tail);
    return 0;
}