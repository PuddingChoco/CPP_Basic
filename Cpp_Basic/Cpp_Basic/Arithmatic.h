#pragma once

class Arithmatic    // Ŭ����
{
	int Integer;
	float DecimalNumber;

public:
	/*
	void Sum(int _Integer);  // ����, �Ű����� �ϳ� �־���.
	void SumFloat(float _DecimalNumber);
	*/

	/*
	void SumTwo(int _Integer1, int _Integer2);
	void SumThree(int _Integer1, int _Integer2, int _Integer3)
	.....  �ʹ� �����ϴ� �ֳ׵� �� �� ��ġ�� ���ڴ� ===> 21���� ��
	// Sum �̶�� �̸� �ϳ������� �Ű������� �ϳ��� �װ��� �ϸ� ���� ������????---> �����ε� ����.
   */
   // �����ε� = �����. �ϳ��� �̸����� ���ս�Ű�°�. �Լ����� ������ ã�Ƽ� �ű⿡ ��������ش�(?)
   // �Ȱ��� �̸����� ������ ����� ������, �����Ҷ� ��ǻ�Ͱ� �˾Ƽ� ã�ư��� ��������.
	void Sum(int _Integer);
	void Sum(float _DecimalNumber); // �׳� �̷��� �ϸ� ��. 
	void Sum(int _Integer, int Integer2); // parameter ������ �޶����� ��.
};