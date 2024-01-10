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
int size_list(Node *head)
{
    int cunt = 0;
    while (head != NULL)
    {
        cunt++;
        head = head->next;
    }
    return cunt;
}
void middle(Node *head, int val)
{
    int p = val / 2;
    if (val % 2 == 0)
    {
        for (int i = 1; i < p; i++)
        {
            head = head->next;
        }
        cout << head->val << " ";
        cout << head->next->val << endl;
    }
    else
    {

        for (int i = 1; i <= p; i++)
        {
            head = head->next;
        }
        cout << head->val << endl;
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
    int c= size_list(head);
   
    middle(head, c);
    return 0;
}