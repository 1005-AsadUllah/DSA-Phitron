#include <bits/stdc++.h>

using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        st.push(v);
    }

    // single value access!!

    // if (!st.empty())
    // {
    //     st.top();
    //     st.pop();
    // }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}