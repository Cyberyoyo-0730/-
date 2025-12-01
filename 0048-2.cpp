//multiset容器
/*#include<iostream>
#include<set>//用于使用multiset容器
using namespace std;
int main() {
	multiset<int>s;//multiset<int> s;：
	               // 定义一个存储int类型的multiset容器，它会自动按升序排列元素。
	               //允许储存重复元素
	for (int i = 0; i < 3; ++i) {//循环读取三个整数并插入multiset
		int a;
		cin >> a;
		s.insert(a);//s.insert(a)：
	}           //将输入的整数a插入到multiset中，容器会自动维护有序性。
	for (auto it = s.begin(); it != s.end(); ++ it) {
			cout << *it << " ";
	}
	return 0;
}*/