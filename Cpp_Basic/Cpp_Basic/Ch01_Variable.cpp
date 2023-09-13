#include "io.h"

void Variable()  
{
  int Value1 = 100;
  Value1 =200;
  
  const int Value2 = 50;
  // Value2 = 100;
}

void VariableTypeNumber()
{
    // 정수형 데이터 종류
  short Num1 = 10; // 2^16 범위가 너무 적을 수 있음
  int Num2 = 20; // 2^32  사용하기에 적당함    int => integer => 정수 
  long Num3 = 30; // 2^64 (64bit) 한 번에 처리할 수 있는 칸의 개수  큰 숫자 써야할때 이거, 근데 너무 많은 빈 공간이 남을 수도 있음
  
  cout << Num1 << Num2 << Num3 << endl;
  
  // 실수형 데이터 종류
  float Num4 = 1.23;
  float Num41 = 1.345f;
  double Num5 = 1.34567;
  
  cout << Num4 << endl << Num5 << endl;
}

void VariableTypeCharacter()
{
  // 문자형 데이터   // 문자 1개 : ' '  , 문자 여러개 : " "
  // char 타입은 문자 1개만 저장 가능
  char Text1; // char : character 
  char Text2;
  
  Text1 = 'A';
  Text2 = 'B';
  
  cout << Text1 << endl << Text2 << endl;  
}

void VariableTypeBool()
{
    bool condition;
  
  condition = true;
  cout << condition << endl;
  condition = false;
  cout << condition << endl;
  
  condition = 1; // true
  condition = 0; // false
  
  // 0 => false, 그 외 정수 => true 
  condition = 10;
  cout << condition << endl;
  
  condition = -5;
  cout << condition << endl;  
}

void InputOutput()
{
  int number;
  // 외부입력  ex.  cin 은 외부 입력이다 --> 정해져있는 문자 숫자 이런거 입력하는거 아님. 
  // std::cin >> number;
  cin >> number;
  //std::cout << number << std::endl;
  cout << number << endl;
}