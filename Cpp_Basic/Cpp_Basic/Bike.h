#pragma once

class Bike // Bike를 부모클래스로 만들기
{
	int Tire = 2;
	

public:  // 값을 받아오는 함수 만들어서 호출해보기
	int Price = 10000000;

	void PrintTire(); // 선언이 먼저 되어야함.
	void Print(); // 오버라이딩 테스트 해봄. 
};