/*#include <iostream>
#include <string>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    // 上半部分（包括中间行）
    for (int i = 0; i < 3; i++) {
        // 打印前面的空格
        for (int j = 0; j < 2 - i; j++) {
            cout << " ";
        }
        // 打印字符，每行的字符数是 2 * i + 1
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << ch;
        }
        cout << endl;
    }
    // 下半部分
    for (int i = 1; i < 3; i++) {
        // 打印前面的空格
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // 打印字符，每行的字符数是 5 - 2 * i
        for (int j = 0; j < 5 - 2 * i; j++) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}*/