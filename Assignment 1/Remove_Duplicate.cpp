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

void delete_from_position(Node *head)
{
    Node *tmp = head;
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
void dupli_remove(Node *head)
{
    ;

    while (head != NULL)
    {
        Node *runner = head;
        while (runner->next != NULL)
        {
            if (head->val == runner->next->val)
            {
                delete_from_position(runner);
            }
            else
            {
                runner = runner->next;
            }
        }
        head = head->next;
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
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    }
    dupli_remove(head);
    print(head);
    return 0;
}