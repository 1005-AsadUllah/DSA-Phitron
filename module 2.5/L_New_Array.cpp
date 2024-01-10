#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    v.insert(v.end(), v2.begin(), v2.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}