#include <iostream>
#include <string>
using namespace std;

class car {
public:
	int speed, gear;
	string color;

	void speedup() {
		speed = speed + 10;
	}

	void speeddown() {
		speed = speed - 10;
	}
};

int main()
{
	car a;

	a.speed = 100;
	a.gear = 3;
	a.color = "red";

	a.speedup();
	a.speeddown();
	


	return 0;
}
