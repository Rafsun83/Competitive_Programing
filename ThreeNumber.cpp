#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,way=0;
    cin>>x>>y;
    for(int i=0; i<=x; i++){
        for(int j=0; j<=x; j++){
            if(i+j<=y && (y-(i+j))<=x)way++;           
        }        
    }
    cout<<way<<endl;   
    return 0;
}