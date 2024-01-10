#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    int q, x, v;
    cin >> q;

    while (q--)
    {
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v < l.size())
            {
                auto it = l.begin();
                advance(it, v);
                l.erase(it);
            }
        }
        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;
        cout << "R -> ";
        for (auto it = l.rbegin(); it != l.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
