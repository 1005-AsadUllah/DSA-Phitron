#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector <int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;  //capacity increase by double!!
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    // v.clear();
    // cout<<v.size()<<endl;
    v.resize(2);

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(5,10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}