#pragma once
// ������ ������Ͽ� ��. 

class Car
{
	char Name[30];  // �ϴ� ������������ ����. ������������ �ϸ� ��������. 
	int Year;
	int Velocity;

public:
	// ������ �Լ��� Ŭ���� �̸��� �Ȱ��� �̸����� ���������. ex Ŭ�����̸�(){}
	Car(int V) // parameter
	{   
		Velocity = V; // ���� �޾Ƽ� ���⿡ �־�� (=)
	}
	// �Լ� ���� ����
	void DriveVelocity();  // Velocity �� ���� �غ�����.
	void DriveTime(); // ȣ���� �ƴ� �����̶� int �� ��.
};