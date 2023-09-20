#pragma once
// 클래스 선언

class Animal
{
private: // private 로 하려면, 나중에 Get, Set 등이 필요하다. 
	int Finger;
	int Leg;
	
public:
	Animal(); // 함수 원형 선언 해줘야함. 매개변수 안받으니 '디폴트 생성자(default constructor)' 라 부름.
	Animal(int _Finger, int _Leg);
	void PrintFinger();
	void PrintLeg();
};