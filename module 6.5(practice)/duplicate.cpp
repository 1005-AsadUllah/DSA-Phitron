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
void duplicate(Node *head)
{
    vector<int> freq(100, 0);

    Node *tmp = head;
    while (tmp != NULL)
    {
        freq[tmp->val]++;
        tmp = tmp->next;
    }

    for (int i = 0; i < 100; i++)
    {
        //     if (freq[i] > 0)
        //     {

        //         cout << "Value " << i << " occurs " << freq[i] << " times." << endl;
        //     }
        if (freq[i] > 1)
        {
            cout << "YES" << endl;
        }
    }
}
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
    cout << "Linked List : ";
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
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    duplicate(head);
    return 0;
}