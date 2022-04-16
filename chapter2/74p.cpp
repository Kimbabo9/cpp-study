#include <iostream>
using namespace std;

int main()
{
	int a, b, c, e;

	cout << "3개의 정수를 입력하세요 : ";
	cin >> a >> b >> c;

	if (a > b && a > c)
		e = a;
	else if (b > c && b > a)
		e = b;
	else
		e = c;

	cout << "가장 큰 정수는 : " << e << endl;


	return 0;
}
