/*#include<iostream>
using namespace std;
int max(int a, int b) {//辗转相除法（欧几里得算法）
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int min(int a, int b) {
	return a * b / max(a, b);//两数之积除以最大公约数等于最小公倍数
}
int main() {
	int a, b;
	cin >> a >> b;
	int x = max(a, b);//不能直接cout一个函数名
	int y = min(a, b);
	cout << x << " " << y << endl;
	return 0;
}*/