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
class myQueue
{
private:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

public:
    void push(int val) // complexity 0(1)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void pop(void) // complexity 0(1)
    {
        sz--;
        Node *deleteNode = head;
        if (head->next == NULL)
        {
            tail = NULL;
            delete deleteNode;
        }
        else
        {
            head = head->next;
            head->prev = NULL;
            delete deleteNode;
        }
    }
    int front(void) // complexity 0(1)
    {
        return head->val;
    }
    int end(void) // complexity 0(1)
    {
        return tail->val;
    }
    int size(void) // complexity 0(1)
    {
        return sz;
    }
    bool empty(void) // complexity 0(1)f
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue qu;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    while (!qu.empty())
    {
        cout << qu.front() << endl;
        // cout << qu.end() << endl;
        qu.pop();
    }
    return 0;
}