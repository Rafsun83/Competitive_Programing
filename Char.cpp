#include<bits/stdc++.h>
#include <cctype>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='a' && x<='z'){
        cout<<(char) toupper(x);
    }
    else{
        cout<<(char) tolower(x);
    }
}