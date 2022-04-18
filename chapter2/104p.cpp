#include <iostream>
using namespace std;

int main()
{
	int list[10];
	int p, max;

	for (int& a : list)
	{
		cout << "아침에 먹는 사과의 개수 : ";
		cin >> a;
	}
	cout << endl;

	max = list[0];
	p = 0;

	for (int i = 0; i < 10; i++)
	{
		if (list[i] > max)
		{
			max = list[i];
			p = i;
		}
	}

	cout << "가장 많이 사과를 먹은 사람번호 = " << p;
	

	return 0;
}
