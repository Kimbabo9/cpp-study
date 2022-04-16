#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int a = rand() % 100;
	int b = rand() % 100;
	int c,e;

	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (1)
	{
		cout << a << " + " << b << " = ";
		cin >> c;

		e = a + b;
		
		if (c == e)
		{
			cout << "맞았습니다." << endl;
			break;
		}
		else
		{
			cout << "틀렸습니다." << endl;
		}
	}

	return 0;
}
