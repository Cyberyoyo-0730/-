/*#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	float x1, x2, x3, y1, y2, y3;
	double S;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >>y3;
	double a, b, c;
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	S = sqrt(0.5 * (a + b + c) * 0.5*(a + b - c) * 0.5*(a - b + c) * 0.5*(b + c-a));
	cout << fixed << setprecision(2) << S << endl;
	return 0;
}*/