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
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    if (st.empty() == false)
        st.pop();
    cout << st.top() << endl;
    if (st.empty() == false)
        st.pop();
    if (st.empty() == false)
        st.pop();
    cout << st.empty() << endl;

    return 0;
}