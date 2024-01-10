#include <bits/stdc++.h>

using namespace std;
int main()
{
    // list<int> mylist();

    // list<int> mylist(5);

    // list<int> mylist(5,10);

    list<int> mylist1 = {10, 20, 30, 40};
    // list<int> mylist(mylist1);

    int a[5] = {10, 20, 30, 40, 50};

    vector<int> v = {10, 20, 30, 40, 50, 60,70};

    list<int> mylist(v.begin(), v.end()); // vector a begin and end dite hoi.

    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    for (int val : mylist)   //shortcut..
    {cout<<val<<endl;
    }

    return 0;
}