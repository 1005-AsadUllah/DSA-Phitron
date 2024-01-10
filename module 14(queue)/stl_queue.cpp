#include <bits/stdc++.h>

using namespace std;
int main()
{
    queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.pop();
    // q.size();
    // q.empty();
    // q.front();
    // q.back();
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}