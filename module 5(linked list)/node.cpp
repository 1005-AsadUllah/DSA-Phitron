#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;
    a.val = 10;
    a.next = &b;
    b.val = 20;
    b.next = NULL;
    cout << a.val << " " << a.next << endl;
    // cout << b.val << " " << b.next << endl;
    cout<<a.next->val<<" "<<a.next->next<<endl;
    return 0;
}
