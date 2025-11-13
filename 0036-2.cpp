/*//环形相邻
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int p[5];// 输入
    for (int i = 0; i < 5; i++) {
        cin >> p[i];
    }// 分糖果过程
    for (int i = 0; i < 5; i++) {
        int current = p[i];  // 保存当前值
        int share = current / 3;
        int left = (i + 4) % 5;  // 左侧索引
        int right = (i + 1) % 5; // 右侧索引
        //索引
        p[left] += share;
        p[right] += share;
        p[i] = share;  // 自己留一份
    }// 输出
    for (int i = 0; i < 5; i++) {
        printf("%5d", p[i]);
    }
    return 0;
}*/