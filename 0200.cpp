//循环移位是一种位操作，以二进制数为例，
//当进行循环左移时，从左边移出去的位会补充到右边；
//进行循环右移时，从右边移出去的位会补充到左边。
/*#include <iostream> 
using namespace std;
unsigned int move(int value, int n);
int main()
{
    int a, n;
    cin >> a >> n;
    cout << move(a, n);
    return 0;
}
unsigned int move(int value, int n)
{
    // 前置校验
    // 如果需要位移的位数为0，则认为不需要位移，直接返回原数字
    if (n == 0)
    {
        return value;
    }
    // 定义位移过程中需要使用到的变量，注意需要使用无符号的整形
    unsigned int result;
    unsigned int temp = value;
    if (n > 0)
    {
        // value向右移n位
        value >>= n;
        // temp向左移32-n位
        temp <<= (32 - n);
        // 右移后需要将移出去的部分补回来
        result = value + temp;
    }
    else
    {
        // 由于此时n为负数，所以需要取其绝对值
        // 然后再进行操作
        int n2 = abs(n);
        // value向左移n2位
        value <<= n2;
        // temp向右移32-n位
        temp >>= (32 - n2);
        // 左移后需要将移出去的部分补回来
        result = temp + value;
    }
    return result;
}*/
