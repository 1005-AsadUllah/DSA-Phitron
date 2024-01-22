#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        map<string, int> m;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string max_st;
        int max_num=0;
        while (ss >> word)
        {
            m[word]++;
            if(m[word] > max_num)
            {
                max_num = m[word];
                max_st = word;
            }
            
        }
        cout<<max_st<<" "<<max_num<<endl;
   
    }
    return 0;
}
