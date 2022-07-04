#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a - 1) / c == b / c) cout << -1 << '\n';
    else cout<<(b/c)*c<<endl;
    return 0;
}