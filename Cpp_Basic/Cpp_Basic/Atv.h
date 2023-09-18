#pragma once
#include "Bike.h"

class Atv : public Bike  // Atv 가 Bike 에서 상속받겠다. 
{
	int Year;

public:
	void PrintPrice(); // 함수 선언 

	
	// 부모클래스에 있는 이름이 똑같은 함수 자식클래스에 만들면? --> 자식이기는 부모 없다.
	void Print(); // Atv 파일로 선언했으니, Atv 에 있는 Print() 가 더 가까울것이다. Bike에 있는것보다.
	

};