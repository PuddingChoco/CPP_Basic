// 사실 child class 에는 아무것도 안만들어도 됨. 
#include <iostream>

#include "bike.h"

using namespace std;

void Bike::PrintTire() // Bike 클래스에 속한 print() 함수 쓰겠다. 
{
	cout << "Bike : " << Tire << endl;
}

void Bike::Print()
{
	cout << "Bike Class" << endl; 
}