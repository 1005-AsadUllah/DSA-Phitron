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
    int val;
    cin >> val;
    int l = 0;
    int r = n - 1;
   
    int flag = 0;
    while (l <= r)
    {
         int mid = (l + r) / 2;
        if (mid == val)
        {
            flag = 1;
            break;
        }
        if (mid < val)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}