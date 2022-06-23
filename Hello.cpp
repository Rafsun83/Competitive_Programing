#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100];
    int arr1[100];
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[n - i - 1] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << arr1[i] << endl;
        else
            cout << arr1[i] << " ";
    }
}