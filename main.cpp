#include<iostream>
#include<stdlib.h>
#include"time.h"
using namespace std;
void main()
{
	int a, b, i, j, k;
	for (i = 0; i < 30; i++)
	{
		a = rand() % 100;
		b = rand() % 100;
		if (a < b)
		{
			k = a;
			a = b;
			b = k;
		}
		cout << a;
		j = rand() % 4;
		switch (j)
		{
		case 0:cout << '+'; break;
		case 1:cout << '- '; break;
		case 2:cout << '*'; break;
		case 3:cout << '/'; break;

		}

		if (j % 4 == 3)
			b++;
		cout << b << "=" << endl;
	}
}

