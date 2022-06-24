#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,first;
    first =n;
    cin>>n;
    for(first=n;first>=10;first=first/10);
    if(first%2==0)  cout<<"EVEN";
    else cout<<"ODD";       
    return 0;
}