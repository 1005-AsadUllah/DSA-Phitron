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
void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
// void insert_at_tail(Node *head, int v)
// {
//     Node *newnode = new Node(v);
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//         if (tmp == NULL)
//         {
//             return;
//         }
//     }

//     newnode->next = tmp->next;
//     tmp->next = newnode;
// }
// void insert_at_tail(Node *head, int v)
// {
//     Node *newnode = new Node(v);
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newnode;
// }
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

        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }
    }

    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }

    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {

        int x, v;

        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else if (x == 2)
        {
            delete_from_position(head, v);
        }

        print(head);
        cout << endl;
    }
    return 0;
}