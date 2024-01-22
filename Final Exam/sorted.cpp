#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        set<int> st;
        int n;
        cin >> n;
        while (n--)
        {
            int val;
            cin >> val;
            st.insert(val);
        }
        for (auto i = st.begin(); i != st.end(); i++)
        {
            cout << *i << " ";
        }
        cout<<endl;
    }
    return 0;
}