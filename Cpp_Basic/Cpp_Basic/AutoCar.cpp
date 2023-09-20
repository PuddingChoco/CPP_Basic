#include "AutoCar.h"

#include <iostream>

using namespace std;


Auto::Auto()
{
	cout << "Auto Default Constructor" << endl;
}

Auto::Auto(int _Year, int _Price) : Vehicle(_Year, _Price)  // 함수 호출하는데 모양은 상속받는것처럼 : 같이 생김.
{// Auto 매개변수에 받은 값들을 여기 Vehicle 매개변수로 넘겨줌.
	cout << "Auto Parameter Constructor" << endl;
}


