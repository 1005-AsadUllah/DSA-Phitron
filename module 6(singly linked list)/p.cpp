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
    Node *newnode = new Node(v); // create a new node !..

    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) // travel to the last node !!
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
    cout << endl;
    cout << endl;
}
// int main()
// {
//     Node *head = NULL;
//     int op;
//     do
//     {
//         cout << "Option 1: Insert at tail.........." << endl;
//         cout << "Option 2: Print Linked list......." << endl;
//         cout << "Opotion 3: Terminate.............." << endl;
//         cin >> op;
//         switch (op)
//         {
//         case 1:
//             int val;
//             cout << "Enter linked list Number: " << endl;
//             cin >> val;
//             insert_at_tail(head, val);
//             break;
//         case 2:
//             cout << "Linked list : " << endl;
//             print_linked_list(head);
//             break;
//         case 3:
//             cout << "Terminating....." << endl;
//             break;

//         default:
//             cout << "Invalid option! Please enter a valid option." << endl;
//         }
//     } while (op != 3);

//     return 0;
// }
int main()
{
    Node *head = NULL;
    while (true)
    {
        int op;
        cout << "Option 1 : Insert at tail!..." << endl;
        cout << "Option 2 : Print Linked List!..." << endl;
        cout << "Option 3 : Terminate!..." << endl;
        cout<<endl;
        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "Enter Number!" << endl;
            cin >> val;
            insert_at_tail(head, val);
            cout<<endl;
        }
        else if (op == 2)
        {
            cout << "Linked List : ";
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "terminating......." << endl;
            cout<<endl;
            break;
        }
        else
        {
            cout << "Invail Option . Try again." << endl;
            cout<<endl;
        }
    }

    return 0;
}