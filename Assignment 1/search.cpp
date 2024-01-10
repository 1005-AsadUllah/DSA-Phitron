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
int size_list(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
int search_element(Node *head, int val, int s)
{
    for (int i = 0; i < s; i++)
    {
        if (val == head->val)
        {
            return i;
        }
        head = head->next;
    }
    return -1;
}
int main()
{
    int qu;
    cin >> qu;
    while (qu--)
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
        int x;
        cin >> x;
        int si = size_list(head);
        int find = search_element(head, x, si);
        if (find == -1)
        {
            cout << find << endl;
        }
        else
            cout << find << endl;
    }
    return 0;
}