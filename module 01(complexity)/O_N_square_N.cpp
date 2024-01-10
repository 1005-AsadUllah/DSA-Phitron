#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}

// This code complexity ==O(n*m);
// or=O(N*N)// n square!!!