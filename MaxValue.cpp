#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n;
    long long max = -INT_MAX;
    cin>>n;   
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        if(max<x)
        max=x;
    }
    cout<<max;
    return 0;
}