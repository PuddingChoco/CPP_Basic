#pragma once

class VirtualParent
{
public:
	void PrintClass();
}; 

class VirtualParent2
{
public:                        // 함수도 동적으로 사용 가능.
	virtual void PrintClass(); // 가상함수는 virtual 써주되 타입 앞에 써줌. 
};

// 클래스 중괄호 끝에는 ; 넣어야함. 
// 사실, 함수, 변수 만들때 숫자 붙이는것은 좋은 방법은 아님.


