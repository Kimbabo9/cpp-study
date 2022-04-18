#include <iostream>
using namespace std;

int square(int a)
{
	return a * a;
}

int main()
{
	int b;

	cout << "제곱할 정수를 입력하시오: ";
	cin >> b;

	cout << square(b);
	
	

	return 0;
}
