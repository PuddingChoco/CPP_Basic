#pragma once
// 클래스 선언

class Animal
{
private: // private 로 하려면, 나중에 Get, Set 등이 필요하다. 
	int Finger;
	int Leg;
	
public:
	Animal(); // 함수 원형 선언 해줘야함.
	void PrintFinger();
	void PrintLeg();
};