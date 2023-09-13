#include "io.h"   

void DefineArray()   
{
  int Num = 0;

  // 선언, declare(define)
  int a[3] = {1,2,3};
  int b[10] = {1,2};
 //int c[3] = {1,2,3,4};  => Syntax Error (구문, 문법 오류)
  int d[3]; // => 이렇게 하면 나중에 넣어줄때 따로따로 넣어줘야함. 
            // => for loop 사용하면 됨 (반복접 대입, 접근할때 유용)
  
  // 대입 => 접근, access
  // d[3] = {1,2,3}; 이렇게 안하고  int d[3]; 이렇게 했다면 아래와같이 일일이 대입해줘야함. 다른 방법도 있기는 함 -> for loop 사용하면 됨.
  d[0] = 1;
  d[1] = 2;
  d[2] = 3;

  // d 배열의 개수는 3개, 반복 5번 값을 대입 => 에러 발생 
  // <= 보다 < 가 보기 좋다. 3이라는 원소의 개수 파악하기 좋음. <=2 라고 쓰면 일일이 세어봐야함.   3은 원소의 개수를 의미하므로 < 이게 훨씬 나음.
  for(int i=0; i<5; i++) 
  {
    cout << "c" << i;
    d[i] = i + 1;
  }

  cout << endl;
  
  // 출력 => 접근 Access
  // 출력도 각각의 원소에 접근해야함.
  // cout << a[3]; //경고 : 실행은 되는데 무제 있다는 뜻
  // cout << a; // 출력은 된다는 뜻, 경고나 오류 안뜸.
  for(int i=0; i<3; i++)
  {
    cout << a[i] << " : ";
  }

  cout << endl;

  for(int i=0; i<13; i++)
  {
    cout << b[i] << " : ";
  }

  cout << endl;

  for(int i=0; i<5; i++)
  {
    cout << d[i] << " : ";
  }

  cout << endl;
  
}

void TwoDimension()
{
  int number[3][2] = 
{
  {1,2},
  {4,5},
  {5,6}
  };

  cout << number[0][0];  // 접근은 이렇게
  cout << number[2][1];  // 인덱스는 0부터 시작하니까 3,2 아님! 

  cout << endl;
  
  for(int i=0; i<3; i++)  // 중첩 loop 쓰기
  {
    for(int j=0; j<2; j++)
      {
        cout << number[i][j] << endl; 
      }
  }
};

