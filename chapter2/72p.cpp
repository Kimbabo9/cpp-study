#include <iostream>
using namespace std;

int main()
{
	char a = 'h';
	char b;

	cout << "비밀코드를 맞춰보세요: ";
	cin >> b;

	if (a == b)
		cout << "정답입니다.";
	else if (a > b)
		cout << b << "뒤에 있습니다.";
	else if (a < b)
		cout << b << "앞에 있습니다.";
	else
		cout << "오류입니다.";

	return 0;
}
