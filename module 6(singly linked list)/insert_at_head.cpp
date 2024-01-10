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
int main()
{
    Node *head = NULL;

    int op;
    do
    {

        cout << "Option 1 : Insert at tail!............." << endl;
        cout << "Option 2 : print  linked list!........." << endl;
        cout << "Option 3 : insert at any position......" << endl;
        cout << "Option 4 : Insert at head ............." << endl;
        cout << "Option 5 : Terminate!.................." << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            int val1;
            cout << "Enter linked list Number: " << endl;
            cin >> val1;
            insert_at_tail(head, val1);
            break;
        case 2:
            cout << "Linked List.." << endl;
            print_linked_list(head);
            break;
        case 3:
            cout << "Enter position : " << endl;
            int pos, val2;
            cin >> pos;
            cout << "Enter value : " << endl;
            cin >> val2;
            insert_at_position(head, pos, val2);
            cout << "Inserted Compeleted!" << endl;
            break;
        case 4:
            cout << "Enter value......" << endl;
            int val3;
            cin >> val3;
            insert_at_head(head, val3);
            break;
        case 5:
            cout << "Terminating......" << endl;
            break;
        default:
            cout << "Invaild Option. Please enter vaild option!" << endl;
            break;
        }
    } while (op != 5);
    return 0;
}