#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void printReverse(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void insert(Node *&head, Node *&tail, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;

    if (pos > size(head))
    {
        cout << "Invalid position" << endl;
        return;
    }
    else if (pos == 0)
    {
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            head->prev = newnode;
            newnode->next = head;
            head = newnode;
        }
    }
    else if (pos == size(head))
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        newnode->next->prev = newnode;
        tmp->next = newnode;
        newnode->prev = tmp;
    }
    print(head);
    printReverse(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q, x, v;
    cin >> q; 

    while (q--)
    {
        cin >> x >> v;
        insert(head, tail, x, v);
    }

    return 0;
}
