#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "시: ";
	cin >> a;
	cout << "분: ";
	cin >> b;
	cout << "초: ";
	cin >> c;

	cout << "전체 초: " << a * 3600 + b * 60 + c;

	return 0;

}
