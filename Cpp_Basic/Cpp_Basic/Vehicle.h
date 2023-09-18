#pragma once
#include <iostream>
using namespace std;

class Vehicle    // Ŭ���� ����
{
private: 
	int Year;   // �տ� �ƹ��͵� �Ⱥ����� Year�� private ��. �ٵ� ���̴°� ����.
	// int Price;
	
public: // �����ڿ� �Ҹ��ڴ� public ������ ����������Ѵ�. 

	int Price;

	// Constructor  ������ ����  ������, �Ҹ��ڴ� �ȸ��� �ڵ������� ��������� ��.
	Vehicle(int _Year, int _Price); // ��������� �����ϴ� ��� ������, Cpp_Basic.cpp 91,92�����ϱ� 


	// Destructor  �Ҹ��� ����
	~Vehicle();

	// Method
	void PrintYear();  // �Լ��� '����' �ߴ�.
	void PrintPrice(); // Ŭ������ ����� �Լ�: �޼ҵ�, ����Լ� ��θ�.
	void EditYear(int newYear);
	int GetYear();
	void SetYear(int newYear);
};