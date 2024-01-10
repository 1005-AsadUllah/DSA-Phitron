#include <bits/stdc++.h>

using namespace std;
int main()
{
    int size;
    cin >> size;
    int sum = 0;
    int ar[size];
    for (int i = 0; i < size; i++)
    { // step =size;
        cin >> ar[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum += ar[i];
    }
    cout << sum << endl;
    return 0;
}
// This code complexity ==O(size);