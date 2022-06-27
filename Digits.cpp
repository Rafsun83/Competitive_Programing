#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
            for(int i=x.size()-1; i>=0; i--){
                cout<<x[i]<<" ";
            }  
        printf("\n");     
    }
    return 0;
}