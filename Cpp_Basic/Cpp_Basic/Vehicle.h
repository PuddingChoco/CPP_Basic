#pragma once
#include <iostream>
using namespace std;

class Vehicle    // 클래스 선언
{
private: 
	int Year;   // 앞에 아무것도 안붙으면 Year는 private 임. 근데 붙이는게 좋음.
	// int Price;
	
public: // 생성자와 소멸자는 public 영역에 만들어져야한다. 

	int Price;

	// Constructor  생성자 명시적 선언     생성자, 소멸자는 안만들어도 자동적으로 만들어지긴 함.
	// 명시적으로 선언하는 경우 보려면, Cpp_Basic.cpp 91,92참고하기
	Vehicle(); // Default Constructor 
	Vehicle(int _Year, int _Price); // 생성자 오버로딩 


	// Destructor  소멸자 선언
	~Vehicle();

	// Method
	void PrintYear();  // 함수를 '선언' 했다.
	void PrintPrice(); // 클래스에 선언된 함수: 메소드, 멤버함수 라부름.
	void EditYear(int newYear);
	int GetYear();
	void SetYear(int newYear);
};