#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,prime;
    cin>>p;
    if(p<2){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=2; i<p; i++){
        if(p%i==0) {
            cout<<"NO"<<endl;
            return 0;
        }       
    }
    cout<<"YES"<<endl;
    return 0;
}