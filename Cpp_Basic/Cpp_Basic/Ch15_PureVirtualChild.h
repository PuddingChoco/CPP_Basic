#pragma once

#include "Ch15_PureVirtualParent.h"

#include <iostream>

using namespace std; 

class PureVirtualChild : public PureVirtualParent
{
public:
	virtual void Print();

	void PrintClass() override; // PrintClass() 를 오버라이드 하겠다는 뜻

	/*
	void PrintClass() override 
	{
		cout << "Pure Virtual Parent Function Override" << endl;
	}
	*/
};


