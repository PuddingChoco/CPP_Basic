#include "io.h"

void DynamicVariable()
{
	int* pNum = new int; // int *pNum = new int; 이것도 가능하지만, 헷갈리지 않게 이렇게 해주기.
	char* pValue = new char;  // 런타임떄 값을 넣어주는것이니 생성할때 초기화 이런 개념은 없음. 

	*pNum = 10;    // * pNum 이렇게 띄어쓰면 안됨. 이건 곱하기임. 
	*pValue = 'a';

	cout << pNum << endl;   // 주소 출력하고 싶으면 별 빼면 됨. 
	cout << pValue << endl;

	cout << *pNum << endl;   // 값 출력하고 싶으면 별 넣으면 됨. 
	cout << *pValue << endl;

	delete pNum;     // 썼으면 꼭 비워주기. 메모리 관리를 위해서. 
	delete pValue; 


	// 일반 배열 선언 
	int a[3] = { 1,2,3 }; 
	int* pa = a;  // 배열이름 자체가 주소를 나타내므로 & 붙일 필요 없음.

	cout << a[0] << " : " << pa[0] << endl;  

	// VS 

	// 동적할당
	int size = 3;
	int* pArray = new int[size]; // 이제 [size] 이런거 가능함! 

	pArray[0] = 10;  // *pArray[0] = 10; 이런거 안됨. 오류남. 배열자체가 주소 나타내는 포인터라서.

	cout << pArray[0] << endl; 

}