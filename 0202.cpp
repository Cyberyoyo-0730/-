#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void dayuling(double a,double b, double c) {
	double d1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	double d2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "x1=" << d1 << " x2=" << d2 << endl;
}
void dengyuling(double a, double b, double c) {
	double d = -b / (2 * a);
	cout << "x1=" << d << endl;
}
void xiaoyuling(double a, double b, double c) {
	double d1 = (-b /( 2 * a));
	double d3 = sqrt(-(b * b - 4 * a * c)) / (2 * a);
	double d2 = (-b /( 2 * a));
	cout << "x1=" << d1 << "+" << fixed<<setprecision(3)<<d3 <<"i"<< " x2="<<d2<<"-" <<fixed<<setprecision(3)<<d3<<"i"  << endl;
}
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double Delta= b * b - 4 * a * c;
	if (Delta > 0) {
	     dayuling( a,  b, c);
	}
	else if (Delta < 0) {
		 xiaoyuling( a, b, c);
	}
	else {
		 dengyuling( a, b, c);
	}
	return 0;
}