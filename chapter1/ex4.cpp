#include <iostream>
using namespace std;

int main()
{
	int l, w, h, a, b;
	
	cout << "길이 : ";
	cin >> l;
	cout << "너비 : ";
	cin >> w;
	cout << "높이 : ";
	cin >> h;

	cout << endl;

	a = l * w * h;
	b = ((l * w) + (l * h) + (h * w)) * 2;

	cout << "상자의 부피 : " << a << endl;
	cout << "상자의 표면적 : " << b << endl;

	return 0;

}
