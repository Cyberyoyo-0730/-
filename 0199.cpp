/*#include<iostream>

using namespace std;

int main()

{

	int n;

	cin >> n;

	for (int j = 1; j <= n; j++)//遍历1到n的所有数字；且当i=1时与i<=0矛盾，不输出。符合题意

	{

		int sum = 0;

		for (int i = 1; i <= j / 2; i++)///计算其所有真因子的和

		{

			if (j % i == 0)

			{

				sum += i;

			}

		}

		if (sum == j)//判断完数

		{

			cout << j << " " << "its factors are" << " ";

			for (int k = 1; k <= j / 2; k++)

			{

				if (j % k == 0)

					cout << k << " ";

			}

			cout << endl;

		}

	}

	return 0;

}*/
//数学原理：对于一个数字 j，它的最大真因子（除了自身）不会超过 j / 2。

