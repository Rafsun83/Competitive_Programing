#include<bits/stdc++.h>
#include<iomanip>
#define yes printf("Yes\n")
using namespace std;
int main(){
    char c,d;
    int a,b,ans;
    scanf("%d %c %d %c %d", &a, &c, &b, &d, &ans);
    if(c=='+') (ans==a+b) ? yes : printf("%d\n", a+b);
    if(c=='-') (ans==a-b) ? yes : printf("%d\n", a-b);
    if(c=='*') (ans==a*b) ? yes : printf("%d\n", a*b);
    return 0;
}