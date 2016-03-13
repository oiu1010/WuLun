#include<iostream>
#include<stdlib.h>
using namespace std;
#include<time.h>

char get_oper(int n)
{
	switch (n)

	{

	case 0:return '+';

	case 1:return '-';

	case 2:return '*';

	case 3:return '/';

	}

}



int main()

{

	srand(time(NULL));

	int num1 = 0;

	int num2 = 0;

	int operators = 0;

	int cpl;          //定义每行输出题目个数

	int range;           //定义数值范围

	int answer;        //定义计算结果

	int num;        //定义题目个数

	int JG;                //定义每行间隔

	char m;              //是否有乘除法

	char n;               //加减有无负数

	cout << "请输入输出题目个数：";

	cin >> num;

	cout << "请输入数值范围：";

	cin >> range;

	cout << "请输入每行题目个数：";

	cin >> cpl;

	cout << "请输入每行间隔：";

	cin >> JG;

	cout << "是否有乘除法（Y/N）?";

	cin >> m;

	cout << "是否有负数（Y/N）?";

	cin >> n;

	for (int i = 1; i <= num; i++)

	{

		//随机产生运算的数和运算符。

		num1 = rand() % range;

		num2 = rand() % range;

		if (m == 'Y')

		{

			operators = rand() % 4;

			switch (operators)

			{

			case 0:answer = num1 + num2; break;

			case 1:answer = num1 - num2; break;

			case 2:answer = num1*num2; break;

			case 3:answer = num1 / num2;

			}

		}

		else if (m == 'N')

		{

			operators = rand() % 2;

			switch (operators)

			{

			case 0:answer = num1 + num2; break;

			case 1:answer = num1 - num2; break;

			}

		}

		if (answer<range)

		{

			if (n == 'Y')

			{

				cout << num1 << get_oper(operators) << num2 << "=";

				for (int j = 0; j <= JG; j++)

					cout << " ";

				cout << "\t";

				if (i%cpl == 0)

				{

					cout << endl;

				}

			}

			else if (n == 'N')

			{

				i--;

			}

		}

		else

		{

			i--;

		}

	}

	return 0;

}