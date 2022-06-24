#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a >> b;
    long long first = a%10;
    long long last = b%10;
    cout<<first+last;
    return 0;
}