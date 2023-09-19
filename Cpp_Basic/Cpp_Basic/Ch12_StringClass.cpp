#include "io.h"

#include <string>  // string 이라는 헤더파일

using namespace std;

void StringClass()  // 문자는 char 타입 선언해서 하나 넣으면 되지만, 문자열은 문작 개수가 여러개라 배열로 만들었었음.
{
	string Text1 = "Hello Sesac"; // String 타입의 클래스, Text는 변수.  배열안써도 되니 간편함. 
	string Text2 = "Hello World";
	
	cout << (Text1 < Text2) << endl; // 크기비교: 알파벳 순서를 비교하는것이다. 뒤에 있을 수록 큰거. 
	cout << (Text1 > Text2) << endl;
	cout << (Text1 == Text2) << endl;

	cout << (Text1 + Text2) << endl;  // 연결 연산     산술연산 중 + 가 유일하게 가능함. 
	// cout << (Text1 - Text2) << endl; // 이건 어차피 안됨.

	cout << Text1.front() << endl; // 첫 번째 원소 출력
	cout << Text1.back() << endl;  // 마지막 원소 출력
	cout << Text1.size() << endl;  // size()는 배열 크기
	cout << Text1.at(3) << endl;   // at: ~에   ( ) 안에 있는 인덱스 번호번째꺼 숫자 출력해달라. 

	cout << Text1.append(Text2) << endl;  // Text1 과 Text2 를 붙여주겠다.   + 연산 한것과 같음.

	cout << Text2.substr(5) << endl; // 원하는 만큼만 화면에 보여주겠다.  (5) 하면, 5번째부터 끝까지 보여주겠다는 뜻. 
	cout << Text2.find("Hello") << endl; // Text2 찾아서 있냐, 있으면 찾아달라. 몇번 순서대로 있는지. 그래서 0 나옴. 

}