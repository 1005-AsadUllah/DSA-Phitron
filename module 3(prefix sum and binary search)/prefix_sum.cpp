#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pre[n]; // new prefix array.
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1]; // assign previous all index sum.
    }
    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << endl;
    }
    return 0;
}