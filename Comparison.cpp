#include <bits/stdc++.h>
#include<iomanip>
#define r printf("Right\n")
#define w printf("Wrong\n")
using namespace std;
int main(){
    int a,b; char c;
    scanf("%d %c %d", &a, &c, &b);
    if(c=='<') (a<b) ? r : w ; 
	if(c=='>') (a>b) ? r : w ; 
	if(c=='=') (a==b) ? r : w ; 
    return 0;    
}
