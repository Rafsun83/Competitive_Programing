#include<bits/stdc++.h>
using namespace std;
int main(){
    int day,y,m,d;
    cin>>day;
    y=day/365;
    m=(day%365)/30;
    d=((day%365)%30)%30;
    cout<<y <<" years\n"<<m<<" months\n"<<d<<" days\n";
    return 0;

}