#include <bits/stdc++.h>

using namespace std;
class myStack
{
private:
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop(void)
    {
        v.pop_back();
    }
    int top(void)
    {
        return v.back();
    }
    int size(void)
    {
        return v.size();
    }
    bool empty(void)
    {
        if (v.size() == 0)
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()) // st.empty() == false
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}