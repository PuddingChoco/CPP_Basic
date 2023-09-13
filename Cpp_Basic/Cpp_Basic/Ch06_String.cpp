#include "io.h"

// C++ 에서는 문자열 (문자 여러개)를 처리하는 클래스가 따로 없음 (아예 없는건 아님), 문자 하나만 저장할 수 있는게 기본. 그럼 C++ 은 문자열을 어떻게 처리? ---> "배열"로 
void String()
{
  char a = 'a';

  char Hello[5] = {'H', 'E', 'L', 'L', 'O'}; // 이게 정석인데,

  char World[6] = "WORLD";    // 이렇게도 할 수 있음. 
  // 큰 따옴표로 묶어서 만들때는 '\0' 문자가 마지막에 포함됨 (마침표같이 자리 차지를 함)

  char b[] = "Hello World";  // 이게 제일 편한 모양. [] 빈 array 놔두면 자동적으로 들어감. 

  //Hello World 의 개수를 알고 싶다면 sizeof() 예약어를 사용하면 됨. C++에서 이미 만들어져있는 함수.
  int Size = sizeof(b); 

  for(int i=0; i<(Size-1); i++)
  {
    cout << b[i] << endl;
  }

  //cout << Size << endl;
}