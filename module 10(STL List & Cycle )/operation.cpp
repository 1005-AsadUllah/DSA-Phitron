#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<int> l = {30,60,10,20,40,10,60,80,10,30,80,10};
    // l.remove(10);

      //sort

    l.sort();   //ascending
    //decending
    // l.sort(greater<int>());

    //unique

    // l.unique();

    //reverse
    l.reverse();
    for(int v:l) cout<<v<<endl;
    return 0;
}