#pragma once
#include "Bike.h"

class Atv : public Bike  // Atv �� Bike ���� ��ӹްڴ�. 
{
	int Year;

public:
	void PrintPrice(); // �Լ� ���� 

	
	// �θ�Ŭ������ �ִ� �̸��� �Ȱ��� �Լ� �ڽ�Ŭ������ �����? --> �ڽ��̱�� �θ� ����.
	void Print(); // Atv ���Ϸ� ����������, Atv �� �ִ� Print() �� �� �������̴�. Bike�� �ִ°ͺ���.
	

};