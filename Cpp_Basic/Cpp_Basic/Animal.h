#pragma once
// Ŭ���� ����

class Animal
{
private: // private �� �Ϸ���, ���߿� Get, Set ���� �ʿ��ϴ�. 
	int Finger;
	int Leg;
	
public:
	Animal(); // �Լ� ���� ���� �������. �Ű����� �ȹ����� '����Ʈ ������(default constructor)' �� �θ�.
	Animal(int _Finger, int _Leg);
	void PrintFinger();
	void PrintLeg();
};