// Ŭ������ �길�� ��������� �ʿ���. 
// �ٵ� ������ ���⿡ ����.
#include <iostream>
#include "Ch10_Class.h"

using namespace std;

// �Լ� �ٵ𼱾�
void Car::DriveVelocity()  // Car Ÿ�Կ� �����ִ� �޼ҵ� �Լ�. �̰� ������ �׳� �Լ�.
{
	//cout << 80 << "km" << endl;
	  cout << Velocity << "km" << endl;
}

void Car::DriveTime()
{
	int LengthUnit = 100;  // ���� �Ÿ� (100km �ε�, �ϴ� 100���� ���߿� ����Ҷ� ǥ�����ָ� ��) 
	cout << (100/Velocity) << "hour" << endl;
}
// �ӵ� ���ϱ�:   �ð� = �Ÿ�/�ӵ� 