#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i : v)
    {
        if (i < 0)
        {
            i = 2;
        }
        else if (i > 0)
        {
            i = 1;
        }
        cout << i << " ";
    }
    return 0;
}