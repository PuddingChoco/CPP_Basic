// 함수 구현
#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal()   // 디폴트 생성자 구현 
{
	Finger = 10;
	Leg = 2;
}

Animal::Animal(int _Finger, int _Leg)   // 매개변수 있는 디폴트 생성자 구현
{
	this->Finger = _Finger;  // 앞에 있는 Finger는 class 에서의 Finger 이고 Leg 도 마찬가지 (Animal.h참고) 근데,
	this->Leg = _Leg;   // 좀 더 명시하고 싶다면 this 쓴다. 
}                 // Finger 가 함수가 아님에도 불구하고 -> 화살표 쓰는 경우가 있다. 

void Animal::PrintFinger()
{
	cout << Finger << endl;
}

void Animal::PrintLeg()
{
	cout << Leg << endl;
}