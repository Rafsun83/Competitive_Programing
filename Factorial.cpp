#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,fact=1;
        cin>>n;
        while(n){
            fact *= n;
            n--;
        }
        cout<<fact<<endl;  
    }
    return 0;
}