#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	char c;

	cout << "영문자를 입력하세요(종료 ctrl z) :";

	while (cin>>c)
	{
		switch (c)
		{
		case 'a': case 'i': case 'e': case 'o': case 'u':
			a++;	break;
		default:
			b++;	break;
		}
		
	}

	cout << "모음: " << a << endl;
	cout << "자음: " << b << endl;


	return 0;
}
