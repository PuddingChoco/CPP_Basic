#include "io.h"

void PointerDefine()
{
	int a = 10;
	
	cout << " a : " << a << endl;  // �� ��� 
	cout << " &a : " << &a << endl; // &a : &(�ּ�����) ����, �ּ� ��� 

	// �����ʹϱ� �Ϲ������� p ���ְ� ���� a ����Ű�� a ����
	int* pa = &a; // ������ ������ �ּҰ� ���� 

	cout << " pa : " << pa << endl; // �ּ� ��� 
	cout << " *pa : " << *pa << endl; // �� ��� (�� �ּ� ��ġ�� �ִ� ���� ã�ư��� �� ���� �����)

	cout << " pa + 1 : " << pa + 1 << endl;
	cout << " *pa + 1 : " << *pa + 1 << endl;
	cout << " *(pa + 1) : " << *(pa + 1) << endl;

	int** ppa = &pa; // �����͸� �����ϴ� ������ 

	cout << " ppa : " << ppa << endl;
	cout << " *ppa : " << *ppa << endl;
	cout << " **ppa : " << **ppa << endl;

	cout << endl;

	int Array[3] = { 1,5,9 };
	int* pArray = Array;  // Array ��ü�� '�ּ�' �ϱ� & �ȳ־ ��! (�߿�)

	cout << "Array : " << Array << endl; // ������ Array[ ] �ϴ��� Array[i] �̷������� ����߾���. ���ݰ� ���� �ϸ� ��� ����?
	cout << "pArray : " << pArray << endl;

	//cout << Array[0] << endl;
	//cout << pArray[0] << endl;

	cout << "Array[1] : " << Array[1] << endl;
	cout << "pArray[1] : " << pArray[1] << endl;

	cout << "*pArray : " << *pArray << endl;
	cout << "*Array : " << *Array << endl;   // Array �� �迭���� �����ͷ� �����Ѱ� �ƴϾ��� ---> �׷��� �� ����.
	
	cout << "Array + 1 : " << Array + 1 << endl;
	cout << "pArray + 1 : " << pArray + 1 << endl;

	cout << "*Array + 1 : " << *Array + 1 << endl;
	cout << "*pArray + 1 : " << *pArray + 1 << endl;

	cout << "*(Array + 1) : " << *(Array + 1) << endl;
	cout << "*(pArray + 1) : " << *(pArray + 1) << endl;
}