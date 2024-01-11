#include <bits/stdc++.h>

using namespace std;
int main()
{
    // max heap STL descending order
    priority_queue<int> pq;
    while (true)
    {
        int comm;
        cin >> comm;
        if (comm == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
        }
        else if (comm == 1)
            pq.pop();
        else if (comm == 2)
            cout << pq.top() << endl;
        else
            break;
    }

    return 0;
}