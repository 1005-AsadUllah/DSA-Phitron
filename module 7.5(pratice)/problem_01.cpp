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
int size_node(Node *head)
{
    int cunt = 0;
    while (head != NULL)
    {
        cunt++;
        head = head->next;
    }
    return cunt;
}
// int count(Node *head)
// {
//     Node *tmp = head;
//     int cnt = 0;
//     while (tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }
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
void print_liked_list(Node *head)
{
    Node *tmp = head;
    cout << "Linked List : " << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
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
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // print_liked_list(head);
    int size1 = size_node(head);
    // cout << "Size : " << endl;
    // cout << size1 << endl;

    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }
    // print_liked_list(head1);
    int size2 = size_node(head1);
    // cout << "Size : " << endl;
    // cout << size2 << endl;
    if (size1 == size2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}