#include "AutoCar.h"

#include <iostream>

using namespace std;


Auto::Auto(){}

Auto::Auto(int _Year, int _Price) : Vehicle(_Year, _Price)  // �Լ� ȣ���ϴµ� ����� ��ӹ޴°�ó�� : ���� ����.
{// Auto �Ű������� ���� ������ ���� Vehicle �Ű������� �Ѱ���.
	cout << "Auto Parameter Constructor" << endl;
}