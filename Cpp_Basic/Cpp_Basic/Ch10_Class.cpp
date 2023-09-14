// 클래스는 얘만의 헤더파일이 필요함. 
// 바디 선언은 여기에 하자.
#include <iostream>
#include "Ch10_Class.h"

using namespace std;

// 함수 바디선언
void Car::DriveVelocity()  // Car 타입에 속해있는 메소드 함수. 이거 없으면 그냥 함수.
{
	//cout << 80 << "km" << endl;
	  cout << Velocity << "km" << endl;
}

void Car::DriveTime()
{
	int LengthUnit = 100;  // 단위 거리 (100km 인데, 일단 100으로 나중에 출력할때 표시해주면 됨) 
	cout << (100/Velocity) << "hour" << endl;
}
// 속도 구하기:   시간 = 거리/속도 