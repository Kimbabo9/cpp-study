#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
	int list[10];
	int max;

	srand(time(NULL));

	for (int& a : list)
	{
		a = rand() % 100 + 1;
		cout << a << " ";
	}

	cout << endl;

	max = list[0];

	for (int& a: list)
	{
		if (a > max)
		{
			max = a;
		}
	}
	cout << "최대값 = " << max << endl;

	return 0;
}
