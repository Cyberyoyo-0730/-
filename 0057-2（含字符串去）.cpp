/*#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int num;
	cin >> num;
	bool div3 = (num % 3 == 0);
	bool div5 = (num % 5 == 0);
	bool div7 = (num % 7 == 0);
	string res;
	if (div3) {
		res += "3 ";
	}
	if (div5) {
		res += "5 ";
	}
	if (div7) {
		res += "7 ";
	}
	if (!res.empty()) {//判断字符串是否有内容，也就是至少能被一个整数整除
		res.pop_back();//去掉字符串后多余的空格
		cout << res << endl;
	}
	else {
		cout << "n" << endl;
	}
	return 0;
}*/