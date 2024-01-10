#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    string a;
    Node *next;
    Node *prev;
    Node(string a)
    {
        this->a = a;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node *&head, Node *&tail, string a)
{
    Node *newnode = new Node(a);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void visit(Node *head, Node *&tmp)
{
    string add;
    cin >> add;

    Node *tmp1 = tmp;
    bool found = false;

    while (head != NULL)
    {
        if (head->a == add)
        {
            cout << head->a << endl;
            tmp = head;
            found = true;
            return;
        }
        else
        {
            head = head->next;
        }
    }

    if (!found)
    {
        cout << "Not Available" << endl;
        tmp = tmp1;
    }
}

void prev(Node *&tmp)
{
    if (tmp == NULL || tmp->prev == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }

    tmp = tmp->prev;
    cout << tmp->a << endl;
}
void next(Node *&tmp)
{
    if (tmp == NULL || tmp->next == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }
    tmp = tmp->next;
    cout << tmp->a << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string a;
    while (true)
    {
        cin >> a;
        if (a == "end")
            break;
        insert(head, tail, a);
    }

    Node *tmp = head;

    int q;
    cin >> q;

    while (q--)
    {
        string step;
        cin >> step;
        if (step == "visit")
        {
            visit(head, tmp);
        }
        else if (step == "prev")
        {
            prev(tmp);
        }
        else if (step == "next")
        {
            next(tmp);
        }
    }

    return 0;
}