#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        stack<int> st;
        string s;
        cin >> s;

        for (char c : s)
        {
            if (c == '1')
            {
                if (!st.empty() && st.top() == 0)
                {
                    st.pop();
                }
                else{
                    st.push(1);
                }
            }
            else
            {
                st.push(0);
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}