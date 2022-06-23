#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100];
    int temp, j;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    j = n - 1;
    for (int i = 0; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)

            cout << arr[i];
        else
            cout << arr[i] << " ";
    }
}