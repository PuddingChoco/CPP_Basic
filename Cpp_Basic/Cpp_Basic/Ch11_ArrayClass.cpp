#include "io.h"
#include <array> // Array 라는 헤더파일

using namespace std; // ArrayClass()는 std namespace 사용해야하므로 이거 써줌. 이거 없으면 std::array 이렇게 써야함(9번째 줄)

// 클래스 타입으로 객체를 선언하겠다. 그 안에 들어있는 여러가지 기능들 내가 사용하겠다. 
void ArrayClass() // 클래스에는 프로퍼티와 메소드가 있다. 
{   // array 클래스 타입으로 선언해준 Number 배열 
	array < int, 3 > Number = { 10,20,30 }; // 인스턴스 선언  array클래스타입<변수에 들어갈 타입   Array변수이름(변수지만 안에 들어갈 애들 int 타입이다)
	                                        // 값 바꿈 원래 Number = { 1,2,3 }; 
	cout << Number.size() << endl;  // size()는 배열 크기  이건 Number 라는 배열의 전용 함수임.    ps.예전에 배운것은 sizeof() 였음. 
	cout << Number.front() << endl; // 첫 번째 원소 출력
	cout << Number.back() << endl; // 마지막 원소 출력
	cout << Number.empty() << endl; // 비어있는지 체크하는것. 비어있으면 true 즉 1,  안비어있으면 false 즉, 0 
	cout << Number.at(2) << endl;  // at: ~에   ( ) 안에 있는 인덱스 번호번째꺼 숫자 출력해달라. 
}