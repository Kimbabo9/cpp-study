#include <iostream>
#include <string>
using namespace std;

class R{
public:
	int w, h;
	int a() {
		return w * h;
	}
};

int main()
{
	R b;

	cout << "가로 : ";
	cin >> b.w;
	cout << "세로 : ";
	cin >> b.h;

	cout << "사각형의 넓이: " << b.a();
	


	return 0;
}
