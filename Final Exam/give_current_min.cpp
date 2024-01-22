#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long n;
    cin >> n;
    // set<long long> st;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        long long val;
        cin >> val;
        pq.push(val);
    }
    long long q;
    cin >> q;
    while (q--)
    {
        long long com;
        cin >> com;
        if (com == 0)
        {
            long long val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if (com == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
        }
    }

    return 0;
}