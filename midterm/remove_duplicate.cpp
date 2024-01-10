#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;
    int v;

    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        l.push_back(v);
    }
    l.sort();
    l.unique();

    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}