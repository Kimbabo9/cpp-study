#include <iostream>
#include <ctime>            //실행 할 때마다 값이 바뀌기 위해 사용
#include <cstdlib>          //랜덤 함수를 사용하기 위해 사용
using namespace std;

int main()
{
    srand(time(NULL));          //안해주면 매번 같은수가 나온다.
    int a = (rand() % 6 + 1);
    int b = (rand() % 6 + 1);

    cout << "두 주사위 합 = " << a + b;

    return 0;

}
