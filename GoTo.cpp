#include <bits/stdc++.h>
using namespace std;
int main()
{
ineligible:
    cout << "You are not ineligible:"
         << "\n";
    cout << "enter Your age: "
         << "\n";
    int age;
    cin >> age;
    if (age < 18)
    {
        goto ineligible;
    }
    else
    {
        cout << "you are enter for vote"
             << "\n";
    }
}