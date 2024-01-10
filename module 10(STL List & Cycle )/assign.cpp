#include <bits/stdc++.h>

using namespace std;
int main()
{

    //assign .......

    list<int> l = {10, 20, 30, 40, 50};
    list<int> newlist;
    // newlist = l;   //assign 01
    newlist.assign(l.begin(), l.end()); // assign 02
    for (int val : newlist)
        cout << val << endl;


    return 0;
}