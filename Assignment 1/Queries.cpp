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
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
    {
        tail = newnode;
    }
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void delete_from_position(Node *&head, int p)
{
    if (head == NULL)
    {
        return;
    }

    if (p == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < p - 1; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }

    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}


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
int size_linked_list(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {

        int x, v;

        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            if (v <= size_linked_list(head))
            {
                delete_from_position(head, v);
            }
        }

        print(head);
        cout << endl;
    }

    return 0;
}