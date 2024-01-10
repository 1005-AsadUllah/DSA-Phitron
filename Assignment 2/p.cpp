// #include <bits/stdc++.h>

// using namespace std;
// int check(stack<int> st, queue<int> q)
// {
//     while (true)
//     {
//         if (st.empty())
//         {
//             return 1;
//         }
//         else
//         {
//             if (st.top() != q.front())
//             {
//                 return 0;
//             }
//             else
//             {
//                 st.pop();
//                 q.pop();
//             }
//         }
//     }
// }
// int main()
// {
//     stack<int> st;
//     queue<int> q;
//     int n, m;
//     cin >> n >> m;

//     while (n<0)
//     {
//         int x;
//         cin >> x;
//         st.push(x);
//         n--;
//     }
//     while (m<0)
//     {
//         int x;
//         cin >> x;
//         q.push(x);
//         m--;
//     }
//     cout<<m<<endl;
//     cout<<n<<endl;
//     if (n == m)
//     {
//         int res = check(st, q);
//         if (res)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         stack<char> st;
//         string s;
//         cin >> s;

//         for (char c : s) {
//             if (c == '0') {
//                 st.push(c);
//             } else if (c == '1') {
//                 if (st.empty()) {
//                     break;
//                 } else {
//                     st.pop();
//                 }
//             }
//         }

//         if (st.empty()) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <stack>
using namespace std;

string isEmptyAfterElimination(string s) {
    stack<char> stk;

    for (char c : s) {
        if (stk.empty() || c != stk.top()) {
            stk.push(c);
        } else {
            stk.pop();
        }
    }

    return (stk.empty() ? "YES" : "NO");
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string binary_string;
        cin >> binary_string;

        string result = isEmptyAfterElimination(binary_string);
        cout << result << endl;
    }

    return 0;
}

