#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<int> l;
    l.push_front(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);
    l.push_back(70);
    l.push_back(80);
    // l.push_front(10);
    // for(int val : l) cout<<val<<endl;
    // cout<<endl;
    // cout<<"delete"<<endl;
    // cout<<endl;
    // l.pop_back();
    // l.pop_front();
    cout << "inserting : " << endl;
    cout << endl;

    // next -> like for loop
    //  2 -> index Number!

    // single insert
    // l.insert(next(l.begin(), 2), 1000);
    // for (int val : l)
    //     cout << val << endl;

    // Multiple insert .......
    // l.insert(next(l.begin(), 3), {100, 200, 300});
    // for (int val : l)
    //     cout << val << endl;

    // vector insert ...
    // vector<int> v = {100, 300, 400};
    // l.insert(next(l.begin(), 5), v.begin(), v.end());
    // for(int val:l) cout<<val<<endl;

    // delete........
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // //replace....
    // replace(l.begin(),l.end(),20,200);
    //  for (int val : l)
    //     cout << val << endl;

    // find......
    auto it = find(l.begin(), l.end(), 100);
    if(it == l.end()){
        cout<<"Not Found"<<endl;
    }
    else {
        cout<<"Found"<<endl;
    }
    // cout << *it << endl;

    return 0;
}