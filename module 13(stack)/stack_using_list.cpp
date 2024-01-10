#include <bits/stdc++.h>

using namespace std;
class myStack
{
private:
    list<int> l;

public:
    void push(int val)
    {
        l.push_back(val);
    }
    void pop(void)
    {
        l.pop_back();
    }
    int top(void)
    {
        return l.back();
    }
    int size(void)
    {
        return l.size();
    }
    bool empty(void)
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}