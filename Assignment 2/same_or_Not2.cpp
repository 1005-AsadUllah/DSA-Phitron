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
class Stack
{
private:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

public:
    void push(int val)
    {
        sz++;
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
    void pop(void)
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top(void)
    {
        return tail->val;
    }
    int size(void)
    {
        return sz;
    }
    bool empty(void)
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int check(stack<int> st, queue<int> q)
{
    while (true)
    {
        if (st.empty())
        {
            return 1;
        }
        else
        {
            if (st.top() != q.front())
            {
                return 0;
            }
            else
            {
                st.pop();
                q.pop();
            }
        }
    }
}

int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {

        int x;
        cin >> x;
        q.push(x);
    }

    if (n == m)
    {
        int res = check(st, q);
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}