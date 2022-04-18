#include <iostream>
using namespace std;

void print(int a)
{
	cout << "정수 출력 : " << a << endl;
}
void print(double b)
{
	cout << "실수 출력 : " << b << endl;
}
void print(char c)
{
	cout << "문자 출력 : " << c << endl;
}

int main()
{
	print(100);
	print(3.14);
	print('C');

	return 0;
}
