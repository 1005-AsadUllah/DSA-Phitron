#include <bits/stdc++.h>

using namespace std;
void fun(int *p)
{
    p = NULL; 
    // copy change!
    cout << p << endl;
}
void fun2(int *&p)
{
    // copy change!
    cout << &p << endl;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << &ptr << endl;
    fun2(ptr);
    cout << &ptr << endl;

    return 0;
}