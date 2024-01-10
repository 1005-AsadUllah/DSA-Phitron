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
        cout<<head->val<<endl;
        head=head->next;
    }
}
void print_right_to_left(Node *tail)
{
    while (tail != NULL)
    {
        cout<<tail->val<<endl;
        tail=tail->prev;
    }
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
    Node *tail=b;
    print_left_to_right(head);
    print_right_to_left(tail);
    return 0;
}