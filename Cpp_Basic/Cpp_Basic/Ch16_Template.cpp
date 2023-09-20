#include "io.h"   // 이건 우리가 만든 헤더파일. <iostream> , using name space std 여기 이미 들어있음. 

// --------오버로딩-----------
int SumNumber(int a, int b)  // 클래스 선언 X, 바로 함수 선언함.
{
	int Sum = a + b;
	
	return Sum;
}

float SumNumber(float a, float b) // 오버로딩 
{
	float Sum = a + b;
	
	return Sum;
}



