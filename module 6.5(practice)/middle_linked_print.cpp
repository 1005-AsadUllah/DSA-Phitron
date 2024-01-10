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
    cout << "Linked List : ";
    while (tmp != NULL)

    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
int count(Node *head)
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
void middle_list_print(Node *head, int num)
{
    Node *tmp = head;
    if (num % 2 == 0)
    {
        int p = num / 2;
        for (int i = 1; i < p; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
        cout << tmp->next->val << endl;
    }
    else
    {
        int p = num / 2;
        for (int i = 1; i <= p; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
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
    int c = count(head);
    middle_list_print(head, c);

    return 0;
}