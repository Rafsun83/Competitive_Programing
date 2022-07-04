#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,prime=0,noprime=0;
    cin>>p;
    if(p<2){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=2; i<p; i++){
        if(p%i==0) {
           
           noprime++;
        }
        else prime++;       
    }
    cout<<noprime<<endl;
    return 0;
}