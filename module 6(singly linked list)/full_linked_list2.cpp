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
void insert_at_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int p, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < p - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invaild Positon" << endl
                 << endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << endl
         << "Inserted at position" << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
void delete_from_position(Node *head, int p)
{
    Node *tmp = head;
    for (int i = 1; i < p - 1; i++)
    {
        tmp = tmp->next;

        if (tmp == NULL)
        {
            cout << endl
                 << "Invaild Positon" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invaild Positon" << endl
             << endl;
        return;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    cout << "deletation Compelete." << endl;
}
void delete_from_head(Node *&head) // need reference..
{
    if (head == NULL)
    {
        cout << "Head is not aviable!" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Deleted head!!" << endl;
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
    
    return 0;
}