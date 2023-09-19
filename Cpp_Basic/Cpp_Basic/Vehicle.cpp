#include <iostream>

#include "Vehicle.h"

using namespace std;

// Constructor ����
Vehicle::Vehicle()
{
	cout << "Vehicle Constructor" << endl;
}

// Constructor   ������ (Ÿ�� ���� ����. Ŭ���� �̸��� �Ȱ��� ���ָ� ��)
Vehicle::Vehicle(int _Year, int _Price)  // Vehicle:: �� �տ� �ٿ��ָ� ��. 
{                   // ���� �������(������Ƽ)�� �̸� ���� ��������,
	Year = _Year;   // �򰥸��� _ �� ���̸� ������ �� ��.
	// Year = 2020 // ��� Ŭ���� ���ο� �ϴ°��̴�(�����ڴϱ�-> Vehicle.h) ���� ����.
	Price = _Price; // �տ� Price �� ����, �� _Price�� 

	cout << "��� �ڵ��� ���� :";
	PrintYear();  // ������ �Լ����� ȣ���ϸ�, 
}

// Destructor  ���� 
Vehicle::~Vehicle()  //�Ҹ��ڴ� �տ� ~ �� �ٿ��ָ� ��.
{
	cout << "�ڵ��� Ȯ��" << endl;
}

void Vehicle::PrintYear()   // �Լ� body �� '����' �ߴ�.
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
int Vehicle::GetYear() // �������⸸ �ϸ� �Ǵϱ� parameter �ʿ� ����
{
	return Year;
}

void Vehicle::SetYear(int newYear)
{
	Year = newYear; 
}