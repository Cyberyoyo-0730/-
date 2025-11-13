#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double x, a, y, b;
	cin >> x >> a >> y >> b;
	double z;
	z = (b * y - a * x) / (b - a);
	cout << fixed << setprecision(2) << z << endl;
	return 0;
}
/*注意变量要为double或float类型（因为要保留小数点）；
可持续发展意味新生资源大于零
设初始资源为S，新生资源为z。
S+az=ax;
S+bz=by;
则z=(b * y - a * x) / (b - a).*/


