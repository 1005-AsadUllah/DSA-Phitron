#include <bits/stdc++.h>

using namespace std;
class myQueue
{
private:
    list<int> l;

public:
    void push(int val) // complexity 0(1)
    {
        l.push_back(val);
    }
    void pop(void) // complexity 0(1)
    {
        l.pop_front();
    }
    int front(void) // complexity 0(1)
    {
        return l.front();
    }
    int end(void) // complexity 0(1)
    {
        return l.back();
    }
    int size(void) // complexity 0(1)
    {
        return l.size();
    }
    bool empty(void) // complexity 0(1)f
    {
        // if (l.size() == 0)
        //     return true;
        // else
        //     return false;
        return l.empty();
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