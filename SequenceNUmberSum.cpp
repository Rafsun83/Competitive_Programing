#include<bits/stdc++.h>
using namespace std;
int main(){
   while(true){
    int n,m, sum=0;
    cin>>m>>n;
    if(n<=0 || m<=0){
        return 0;
    }
    if(n>m) swap(n,m);
    for(int i=n; i<=m; i++){
        cout<<i<<" ";
        sum = sum+i;
    }
     cout<<"sum ="<<sum<<endl; 
 }
return 0;
}