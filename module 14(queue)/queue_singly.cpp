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
            tail = newnode;
        }
    }
    void pop(void) // complexity 0(1)
    {
        sz--;
        if (head->next == NULL)
        {
            Node *deleteNode = head;
            head = NULL;
            tail = NULL;
            delete deleteNode;
        }
        else
        {
            Node *deleteNode = head;
            head = head->next;
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

    // qu.push(10);
    // qu.push(20);
    // qu.push(30);
    // qu.push(40);
    // qu.pop();
    // qu.pop();
    // qu.pop();
    // // qu.pop();
    // cout << qu.empty() << endl;
    // if (!qu.empty())
    // {
    //     qu.pop();
    //     cout << "Nice" << endl;
    // }
    // // cout << qu.front() << endl;
    // // cout << qu.end() << endl;

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
        cout<<"Line : ";
        cout << qu.front() << " ";
        cout << qu.end() << endl;

        qu.pop();
    }
    return 0;
}