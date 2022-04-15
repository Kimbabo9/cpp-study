#include <iostream>
using namespace std;

int main()
{
    int money, price;
    int c, m;

    cout << "현재 가지고 있는 돈 : ";
    cin >> money;

    cout << "캔디의 가격 : ";
    cin >> price;

    c = money / price;
    m = money % price;

    cout << "최대로 살 수 있는 캔디의 개수 = " << c << endl;
    cout << "캔디 구입 후 남은 돈 = " << m;

    return 0;

}
