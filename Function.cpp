#include <bits/stdc++.h>
using namespace std;
void fun()
{
    static int i = 0;
    int j = 0;
    i++;
    j++;

    cout << i << "" << j << endl;
};
int main()
{
    fun();
    fun();
    fun();
};