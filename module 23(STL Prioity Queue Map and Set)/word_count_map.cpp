#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    map<string, int> mp;
    getline(cin, s);
    string word;
    stringstream ss(s);
    while (ss >> word)
    {
        mp[word]++;
        // cout<<word<<endl;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
        cout << i->first << " " << i->second << endl;

    return 0;
}