#include <bits/stdc++.h>
using namespace std;
int digitSum(int x){
    int sum =0;
    while(x){
    sum += x%10;
    x /=10;              
    }
    return sum;
}
int main(){
    int n, a,b;
    cin>>n>>a>>b;
    if(a>b) swap(b,a);
    int ans =0;
    for(int i=0; i<=n; i++){
        int dsum = digitSum(i);
        if(dsum>=a and dsum<=b){
            ans+=i;
        }
    }
    cout<<ans;   
    return 0;
}