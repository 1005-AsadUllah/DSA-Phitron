#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i : v)
    {
        auto it = find(v.begin(), v.end(), i + 1);
        if (it == v.end())
        {
        }
        else
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}