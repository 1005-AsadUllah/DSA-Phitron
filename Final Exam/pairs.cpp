#include <bits/stdc++.h>

using namespace std;
class cmp
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if (a.first > b.first)
            return true;
        else if (a.first < b.first)
            return false;
        else
        {
            if (a.second < b.second)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    priority_queue < pair<string, int>, vector<pair<string, int>>, cmp> p;
    int n;
    cin >> n;
    while (n--)
    {

        pair<string, int> pa;
        cin >> pa.first >> pa.second;
        p.push(pa);
    }
     while (!p.empty()) {
        cout << p.top().first << " " << p.top().second << endl;
        p.pop();
    }
   
    return 0;
}
