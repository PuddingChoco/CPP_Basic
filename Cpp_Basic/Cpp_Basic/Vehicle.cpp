#include <iostream>

#include "Vehicle.h"

using namespace std;

// Constructor 정의
Vehicle::Vehicle()
{
	cout << "Vehicle Constructor" << endl;
}

// Constructor   생성자 (타입 선언 안함. 클래스 이름만 똑같이 써주면 됨)
Vehicle::Vehicle(int _Year, int _Price)  // Vehicle:: 만 앞에 붙여주면 됨. 
{                   // 보통 멤버변수(프로퍼티)와 이름 같게 써주지만,
	Year = _Year;   // 헷갈리니 _ 를 붙이면 구분이 좀 됨.
	// Year = 2020 // 얘는 클래스 내부에 하는것이니(생성자니까-> Vehicle.h) 접근 가능.
	Price = _Price; // 앞에 Price 는 변수, 뒤 _Price는 

	cout << "출고 자동차 연식 :";
	PrintYear();  // 생성자 함수에서 호출하면, 
}

// Destructor  정의 
Vehicle::~Vehicle()  //소멸자는 앞에 ~ 만 붙여주면 됨.
{
	cout << "자동차 확인" << endl;
}

void Vehicle::PrintYear()   // 함수 body 를 '정의' 했다.
{
	cout << Year << endl;
}

void Vehicle::PrintPrice()
{
	cout << Price << endl;
}

void Vehicle::EditYear(int newYear)
{
	Year = newYear;
}

// Get, Set Method
int Vehicle::GetYear() // 가져오기만 하면 되니까 parameter 필요 없음
{
	return Year;
}

void Vehicle::SetYear(int newYear)
{
	Year = newYear; 
}