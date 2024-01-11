#include <bits/stdc++.h>

using namespace std;
int main()
{
    set<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    // for (auto i = st.begin(); i != st.end(); i++)
    //     cout << *i << endl;
    if (st.count(10))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}