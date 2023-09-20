#pragma once
#include "Vehicle.h"

class Auto : public Vehicle // { } 안에 아무 내용도 없다면, Auto는 Vehicle 클래스 상속받는것밖에 없는 껍데기
{
public:
	Auto();
	Auto(int _Year, int _Price);
};


