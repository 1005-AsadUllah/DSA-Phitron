#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<int> mylist = {10, 20, 30, 40, 50};
    cout << mylist.size() << endl;
    cout << mylist.max_size() << endl;
    // mylist.clear();
  

    // cout << mylist.empty();
    mylist.resize(3);
    // mylist.resize(10);
    mylist.resize(10,100);
      for (int val : mylist)
        cout << val << endl;
    return 0;
}