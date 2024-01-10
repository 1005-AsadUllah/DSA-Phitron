#include <bits/stdc++.h>

using namespace std;
class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> q2;
        int last;
        while (!q.empty())
        {

            int k = q.front();
            q.pop();
            if (q.empty())
            {
                last = k;
                break;
            }
            q2.push(k);
        }
        q = q2;
        return last;
    }

    int top()
    {
        queue<int> q2;
        int last;
        while (!q.empty())
        {

            int k = q.front();
            q.pop();
            if (q.empty())
            {
                last = k;
            }
            q2.push(k);
        }
        q = q2;
        return last;
    }

    bool empty()
    {
        return q.empty();
    }
};
int main()
{

    return 0;
}
