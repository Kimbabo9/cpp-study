#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int a, b, c =0;

	srand(time(NULL));

	b = rand() % 100 + 1;

	while (1)
	{
		cout << "정답을 추측하여 보시오: ";
		cin >> a;

		c++;

		if (a == b)
		{
			cout << "축하합니다. 시도횟수= " << c;
			break;
		}
		else if (a > b)
			cout << "제시한 정수가 높습니다." << endl;
		else
			cout << "제시한 정수가 낮습니다." << endl;
	}


	return 0;
}
