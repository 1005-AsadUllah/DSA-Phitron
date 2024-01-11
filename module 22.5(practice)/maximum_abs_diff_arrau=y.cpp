#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& n) {
        sort(n.begin(),n.end());
        int i = n.size()-1;
        int j = n.size()-2;
        
        return (n[i]-1)*(n[j]-1);
        
    }
};
int main()
{
    
    return 0;
}