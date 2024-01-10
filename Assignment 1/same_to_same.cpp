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
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
int check(Node *head, Node *head1)
{

    int size1 = size_list(head);

    int size2 = size_list(head1);
    int flag = 1;

    if (size1 != size2)
    {
        flag = 0;
        return flag;
    }
    else
    {
        while (size1--)
        {
            if (head->val != head1->val)
            {
                flag = 0;
                return flag;
            }
            head = head->next;
            head1 = head1->next;
        }
    }
    return flag;
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
int main()
{
    int val;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }
    int ch = check(head1, head2);
    if (ch == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}