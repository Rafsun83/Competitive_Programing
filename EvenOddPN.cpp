#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; 
	cin >> n ;
	int odd = 0 , even = 0 , pos = 0 , neg = 0 ; 
	while(n--){
		int x;
		cin>>x; 
		(x%2) ? odd++ : even++ ; 
		if(x!=0)
			(x>0) ? pos++ : neg++ ; 
	}
	printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even , odd , pos, neg);

	return 0;
}