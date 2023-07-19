#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	long long a,b,c,d,e,f;
	long long num = 998244353;
	cin >> a >> b >> c >> d >> e >> f;
	long long a2,b2,c2,d2,e2,f2;
	a2 = a%num;
	b2 = b%num;
	c2 = c%num;
	d2 = d%num;
	e2 = e%num;
	f2 = f%num;
	long long x = (a2*b2)%num;
	x = (x*c2)%num;
	long long y = (d2*e2)%num;
	y = (y*f2)%num;
	long long ans = (x-y+num)%num;
	cout << ans <<endl;
	return 0;

	//解説見てもわからんかった
}



