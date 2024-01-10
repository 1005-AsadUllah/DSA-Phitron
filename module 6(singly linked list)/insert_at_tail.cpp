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
    Node *NewNode = new Node(v);
    if (head == NULL)
    {
        head = NewNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp akhon last node a.
    tmp->next = NewNode;
}
void print_linked_list(Node *head)
{
    cout << "Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {

        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 : Insert at tail!............." << endl;
        cout << "Option 2 : print  linked list!........." << endl;
        cout << "Option 3 : Terminate!.................." << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "Enter value to insert: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}