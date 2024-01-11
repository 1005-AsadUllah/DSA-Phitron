#include <bits/stdc++.h>

using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);

    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] > v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}
void print_heap(vector<int> v)
{
    for (int c : v)
        cout << c << " ";
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    print_heap(v);
    return 0;
}