#include "io.h"

void DynamicVariable()
{
	int* pNum = new int; // int *pNum = new int; �̰͵� ����������, �򰥸��� �ʰ� �̷��� ���ֱ�.
	char* pValue = new char;  // ��Ÿ�Ӌ� ���� �־��ִ°��̴� �����Ҷ� �ʱ�ȭ �̷� ������ ����. 

	*pNum = 10;    // * pNum �̷��� ���� �ȵ�. �̰� ���ϱ���. 
	*pValue = 'a';

	cout << pNum << endl;   // �ּ� ����ϰ� ������ �� ���� ��. 
	cout << pValue << endl;

	cout << *pNum << endl;   // �� ����ϰ� ������ �� ������ ��. 
	cout << *pValue << endl;

	delete pNum;     // ������ �� ����ֱ�. �޸� ������ ���ؼ�. 
	delete pValue; 


	// �Ϲ� �迭 ���� 
	int a[3] = { 1,2,3 }; 
	int* pa = a;  // �迭�̸� ��ü�� �ּҸ� ��Ÿ���Ƿ� & ���� �ʿ� ����.

	cout << a[0] << " : " << pa[0] << endl;  

	// VS 

	// �����Ҵ�
	int size = 3;
	int* pArray = new int[size]; // ���� [size] �̷��� ������! 

	pArray[0] = 10;  // *pArray[0] = 10; �̷��� �ȵ�. ������. �迭��ü�� �ּ� ��Ÿ���� �����Ͷ�.

	cout << pArray[0] << endl; 

}