#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='a' && x<='z' ){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    else if(x>='A' && x<='Z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }    
    return 0;
}