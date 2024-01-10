#include <bits/stdc++.h>

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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
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
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int size(Node *head)
{
    int cnt = 1;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
int palindrome_list(Node *head, Node *tail)
{
    if (head == NULL)
        return 1;
    Node *i = head;
    Node *j = tail;
    // while (i != j && i->next != j) // next dile again check korbe! 63 line ta likte hobe...
     while (i != j && i->prev != j)
    {
        if (i->val != j->val)
        {
            return 0;
        }
        i = i->next;
        j = j->prev;
    }
    // if (i->val != j->val)
    //     return 0;
    return 1;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_tail(head, tail, v);
    }
    int n = palindrome_list(head, tail);
    cout << n << endl;
    if (n == 1)
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
