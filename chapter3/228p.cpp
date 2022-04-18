#include <iostream>
#include <string>
using namespace std;

class R {
	int we, he;
public:
	R(int w, int h);
	int a();
};

R::R(int w, int h)
{
	we = w;
	he = h;
}

int R::a()
{
	return we * he;
}

int main()
{
	R r(3, 4);

	cout << "사각형의 넓이: " << r.a();



	return 0;
}
