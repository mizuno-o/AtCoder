#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){

	double a,b;
	cin >> a >> b;
	cout << setprecision(20);
	double ab = pow(a,b);
	double ba = pow(b,a);
	cout << ab + ba <<endl;
	return 0;
}
