#pragma once

class Arithmatic    // 클래스
{
	int Integer;
	float DecimalNumber;

public:
	/*
	void Sum(int _Integer);  // 선언만, 매개변수 하나 넣어줌.
	void SumFloat(float _DecimalNumber);
	*/

	/*
	void SumTwo(int _Integer1, int _Integer2);
	void SumThree(int _Integer1, int _Integer2, int _Integer3)
	.....  너무 복잡하니 애네들 두 개 합치면 좋겠다 ===> 21번쨰 줄
	// Sum 이라는 이름 하나가지고 매개변수가 하나든 네개든 하면 좋지 않을까????---> 오버로딩 쓰기.
   */
   // 오버로딩 = 덮어쓰기. 하나의 이름으로 통합시키는것. 함수형이 같은걸 찾아서 거기에 적용시켜준다(?)
   // 똑같은 이름으로 여러개 만들어 놓으면, 실행할때 컴퓨터가 알아서 찾아가서 실행해줌.
	void Sum(int _Integer);
	void Sum(float _DecimalNumber); // 그냥 이렇게 하면 됨. 
	void Sum(int _Integer, int Integer2); // parameter 개수가 달라져도 됨.
};