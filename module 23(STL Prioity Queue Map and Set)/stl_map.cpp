#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<string, int> mp;

    // this insert is't so usefull

    // mp.insert({"asad", 100});
    // mp.insert({"nahin", 99});
    // mp.insert({"sazid", 98});
    // mp.insert({"mili", 97});

    // this is use full
    mp["asad"] = 100;
    mp["nahin"] = 99;
    mp["sazid"] = 97;
    mp["mili"] = 98;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    //     cout << it->first << " " << it->second << endl;

    // if (mp["asad"])
    //     cout << "Ase" << endl;
    // else
    //     cout << "Nai" << endl;
    if(mp.count("asad"))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    // cout << mp["asad"] << endl;

    return 0;
}