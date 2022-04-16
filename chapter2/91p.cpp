#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	float e;

	cout << "도형을 선택하세요(1,2,3): ";
	cin >> a;

	if (a == 1)
	{
		cout << "가로: ";
		cin >> b;
		cout << "세로: ";
		cin >> c;
		d = b * c;

		cout << "면적: " << d << endl;
	}
	else if (a == 2)
	{
		cout << "반지름: ";
		cin >> b;
		e = b * b * 3.14;

		cout << "면적: " << e << endl;
	}
	else if (a == 3)
	{
		cout << "가로: ";
		cin >> b;
		cout << "세로: ";
		cin >> c;
		e = (float) b * c / 2;

		cout << "면적: " << e << endl;
	}
	else
	{
		cout << "잘못된 선택입니다." << endl;
	}

	return 0;
}
