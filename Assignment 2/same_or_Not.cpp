#include <bits/stdc++.h>

using namespace std;
int check(stack<int> st, queue<int> q)
{
    while (true)
    {
        if (st.empty())
        {
            return 1;
        }
        else
        {
            if (st.top() != q.front())
            {
                return 0;
            }
            else
            {
                st.pop();
                q.pop();
            }
        }
    }
}
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {

        int x;
        cin >> x;
        q.push(x);
    }
    if (n == m)
    {
        int res = check(st, q);
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     stack<int> st;
//     queue<int> q;
//     int n, m;
//     cin >> n >> m;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         st.push(x);
//     }

//     while (m--)
//     {
//         int x;
//         cin >> x;
//         q.push(x);
//     }
//     int flag = 1;
//     if (m == n)
//     {
//         while (n--)
//         {
//             if (st.empty())
//             {
//                 break;
//             }
//             int top = st.top();
//             int front = q.front();
//             if (top != front)
//             {
//                 flag = 0;
//                 break;
//             }
//             else
//             {
//                 st.pop();
//                 q.pop();
//             }
//         }
//     }
//     else
//     {
//         flag = 0;
//     }
//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }