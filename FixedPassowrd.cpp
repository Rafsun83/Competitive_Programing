#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int flag =0;
    int wrong = 0;
    while(cin>>n){
        if(n==1999) flag=1;
        if(flag==0) wrong++;
    }
    while(wrong--) printf("Wrong\n");
    if(flag) printf("Correct\n");
    return 0;

    
}