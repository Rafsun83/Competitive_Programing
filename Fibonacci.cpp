#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, a=0, b=1;
    cin>>n;
    if(n==1){
        printf("0");

    }
    else{
        printf("0 1");
        for(int i=3; i<=n; i++){
            long long fib = a + b;
            cout<<" "<< fib;            
            a = b; b=fib;           
    }
    }
 
    return 0;
}