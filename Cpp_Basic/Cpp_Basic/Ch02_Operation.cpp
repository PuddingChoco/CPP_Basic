#include "io.h"

void OperationArithmetic(int Arith1, int Arith2)
{
  // int Arith1 = 10;
  // int Arith2 = 20;
  
  int Sum = Arith1 + Arith2;
  int Sub = Arith1 - Arith2;
  int Mul = Arith1 * Arith2;
  int Div = Arith1 / Arith2;
  int Rest = Arith1 % Arith2;
  
  cout << Sum << endl<<  Sub << endl << Mul << endl << Div << endl << Rest << endl;
}

/*
void OperationIncrementDecrement()
{
  // 증감 연산
  int Increase = 0; // 초기화  (변수를 쓰면서 처음에 어떤 값을 쓰는지 명시해주면 초기화 한다 라고 함)
  int Decrease = 10;
  
  Increase = Increase + 1;  // 더해지는 값 ; 증감값(영어로 Step), 앞에 값에 1을 더해서 다시 그 값에 넣어줌, (값을 저장할 변수 = 값을 저장할 변수 한번 더 써줌 + 증가할값
  
  Decrease = Decrease - 2;
  
  cout << Increase << endl << Decrease << endl;
  
  //위의 증감식을 축약시켜보자. 뒤의 변수는 생략해주기, + - 는 = 앞으로 빼주기 
  Increase += 1;   
  Decrease -= 2;
  
  // Count : 개수  (1씩 증가시키거나 감소시키는 경우는 ---> Count 라는 표현 씀) 이런 경우는 특별하게 나타냄.
  Increase++;
  Decrease--;
  
  cout << Increase << endl << Decrease << endl;
  
}
*/

void OperationComparison()
{
  // 비교 연산의 결과 값 : 참/거짓, true/false, 1/0      결과값은 bool 타입 데이터가 나온다. 
  int Greater = 30;
  int Less = 10;
  
  // 기호 꼬일일 없게 ( ) 이용해주면 좋음.
  cout << ( Greater > Less ) << endl;  // > : greater than  컴퓨터에서는 일반적으로 왼쪽을 기준으로 함.
  cout << ( Greater < Less ) << endl;  // < : less than
  // 변수가 기준이 되는것이 일반적   ex. a>3   3<a   둘 다 되지만 안되는 언어들도 있음.
  
  cout << ( Greater >= Less ) << endl;  // = 는 항상 오른쪽에 쓴다!
  cout << ( Greater <= Less ) << endl; 
  
  cout << ( Greater == Less ) << endl;  // == : 같다   = : 대입연산자 
  cout << ( Greater != Less ) << endl;  // ! 는 보통 부정의 의미로 쓰임.
}
  
void OperationLogical()
{
  // 논리 연산       bool 값 자체를 다루고, 결과도 bool 값으로 나옴. 
  // AND : bool 값이 모두 true 이면 결과는 true, 하나라도 false 이면 결과는 false 
  cout << ( true && true) << endl;  // true false는 bool 타입 데이터 
  cout << ( true && false) << endl;
  
  // OR : bool 값이 모두 false 이면 결과는 false, 하나라도 true 이면 결과는 true 
  cout << ( true || true) << endl;  
  cout << ( true || false) << endl;
  
  // 국어가 90이상이고 영어가 90이상이면 ~ 
  int Kor = 80;
  int Eng = 95;
  
  cout << ( Kor >= 90 && Eng >= 90) << endl;
  cout << ( false && true) << endl;
  cout << ( false ) << endl;
  
  cout << !( Kor >= 90 && Eng >= 90) << endl;
  cout << !( (Kor >= 90) && Eng >= 90) << endl;  // 다시 적기 
}

void OperationBit()
{
  // 비트 연산
  int Bit1 = 15; 
  // 00000000 00000000 00000000 00000000 00001111 이게 15임.  우선 00001111 로 보기.
  int Bit2 = 20; 
  // 00010100
  
  int BitAnd = Bit1 & Bit2;
  // 00001111
  // 00010100
  // 00000100  => 2^0 * 0 + 2^1 * 0 + 2^2 * 1 = 4 
  
  cout << BitAnd << endl;
  
  // 이동(쉬프트) 연산은 숫자 여러개 가지고 하는거 아니고 하나만 가지고 하면 됨.
  // 15 숫자 값을 비트 이동 연산
  cout << ( Bit1 << 1 ) << endl; // 왼쪽 방향으로 한 칸씩 이동시켜라 
  // 00001111 
  // 00011110 => 2^0 * 0 + 2^1 * 1 + 2^2 * 1 + 2^3 * 1 + 2^4 * 1 = 0 + 2 + 4 + 8 + 16 = 30
}

void OperationThree()
{ 
  // 삼항 연산
  cout << (3 > 5 ? "Hello" : "World") << endl;
  cout << (3 < 5 ? "Hello" : "World") << endl;
}
