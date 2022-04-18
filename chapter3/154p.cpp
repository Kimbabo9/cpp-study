#include <iostream>
#include <string>
using namespace std;



int main()
{
	
	string a, b;
	int c=0;

	cout << "DNA1 : ";
	cin >> a;
	cout << "DNA2 : ";
	cin >> b;

	if (a.length() != b.length())
		cout << "길이가 다릅니다. " << endl;
	else
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[i])
				c = c + 1;
		}
		cout << "해밍 거리는 " << c << endl;
	}

	return 0;
}
