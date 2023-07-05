#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){
	
	int a,b;
	cin >> a >> b;
	double c;
	c = ((double)b / (double)a);
	/*
	c = round((double)b*1000/(double)a) / 1000;
	string c_str = to_string(c);
	cout << c <<endl;
	cout << c_str.size() <<endl;
	if(c_str.size()<5){
		int num = 5 - c_str.size();
		for(int i=0;i<num;i++){
			c_str = c_str + "0";
		}
	}
	*/

	cout << fixed << setprecision(3) << c <<endl;
	return 0;
}
