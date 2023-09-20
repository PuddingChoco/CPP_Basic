// �Լ� ����
#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal()   // ����Ʈ ������ ���� 
{
	Finger = 10;
	Leg = 2;
}

Animal::Animal(int _Finger, int _Leg)   // �Ű����� �ִ� ����Ʈ ������ ����
{
	this->Finger = _Finger;  // �տ� �ִ� Finger�� class ������ Finger �̰� Leg �� �������� (Animal.h����) �ٵ�,
	this->Leg = _Leg;   // �� �� ����ϰ� �ʹٸ� this ����. 
}                 // Finger �� �Լ��� �ƴԿ��� �ұ��ϰ� -> ȭ��ǥ ���� ��찡 �ִ�. 

void Animal::PrintFinger()
{
	cout << Finger << endl;
}

void Animal::PrintLeg()
{
	cout << Leg << endl;
}