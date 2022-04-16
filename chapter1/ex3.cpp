#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c;

	cout << "첫 번째 변 : ";
	cin >> a;
	cout << "두 번째 변 : ";
	cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));     //pow(a,b)는  a^b 뜻함.  sqrt(c)는 루트 c를 뜻함.

	cout << "빗변 길이 : " << c;
	return 0;
}
