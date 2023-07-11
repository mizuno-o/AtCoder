#include<iostream>
#include<vector>
using namespace std;

int main(){

	int h,m;
	cin >> h >> m;
	int a,b,c,d = 0;
	a = h/10;
	b = h%10;
	c = m/10;
	d = m%10;
	//cout << a << " " << b << " " << c << " " << d <<endl;
	int h2 = a*10+c;	
	int m2 = b*10+d;	
	//cout << h2 << " " << m2 <<endl;
	
	if((h2<24)&&(m2<60)){
		cout << h << " " << m <<endl;
	}else{
		if(h+1>=24){
			h-=24;
		}
		if(m2>=60){ //ex)16 00 -> 10:60 !-> 17:00
			h=(a+1)*10-1;
		}
		cout << h+1 << " " << 0 <<endl;
	}
	return 0;
}
