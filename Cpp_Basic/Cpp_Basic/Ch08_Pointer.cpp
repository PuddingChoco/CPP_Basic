#include "io.h"

void PointerDefine()
{
	int a = 10;
	
	cout << " a : " << a << endl;  // 값 출력 
	cout << " &a : " << &a << endl; // &a : &(주소참조) 연산, 주소 출력 

	// 포인터니까 일반적으로 p 써주고 변수 a 가리키니 a 붙임
	int* pa = &a; // 포인터 변수에 주소값 대입 

	cout << " pa : " << pa << endl; // 주소 출력 
	cout << " *pa : " << *pa << endl; // 값 출력 (그 주소 위치에 있는 변수 찾아가서 그 값을 출력함)

	cout << " pa + 1 : " << pa + 1 << endl;
	cout << " *pa + 1 : " << *pa + 1 << endl;
	cout << " *(pa + 1) : " << *(pa + 1) << endl;

	int** ppa = &pa; // 포인터를 참조하는 포인터 

	cout << " ppa : " << ppa << endl;
	cout << " *ppa : " << *ppa << endl;
	cout << " **ppa : " << **ppa << endl;

	cout << endl;

	int Array[3] = { 1,5,9 };
	int* pArray = Array;  // Array 자체가 '주소' 니까 & 안넣어도 됨! (중요)

	cout << "Array : " << Array << endl; // 원래는 Array[ ] 하던지 Array[i] 이런식으로 출력했었음. 지금과 같이 하면 어떻게 나옴?
	cout << "pArray : " << pArray << endl;

	//cout << Array[0] << endl;
	//cout << pArray[0] << endl;

	cout << "Array[1] : " << Array[1] << endl;
	cout << "pArray[1] : " << pArray[1] << endl;

	cout << "*pArray : " << *pArray << endl;
	cout << "*Array : " << *Array << endl;   // Array 는 배열이지 포인터로 선언한건 아니었음 ---> 그래도 답 나옴.
	
	cout << "Array + 1 : " << Array + 1 << endl;
	cout << "pArray + 1 : " << pArray + 1 << endl;

	cout << "*Array + 1 : " << *Array + 1 << endl;
	cout << "*pArray + 1 : " << *pArray + 1 << endl;

	cout << "*(Array + 1) : " << *(Array + 1) << endl;
	cout << "*(pArray + 1) : " << *(pArray + 1) << endl;
}