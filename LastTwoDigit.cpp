#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
    long long a,b,c,d, sum;
	cin >> a >> b >> c >> d ; 
	a %= 100 ; 
	b %= 100 ; 
	c %= 100 ; 
	d %= 100 ; 
	sum = a * b * c * d ; 
	sum %= 100;
	if(sum<10) cout << 0 << sum << endl ; 
	else 
	cout << sum << endl ; 
	return 0;
}