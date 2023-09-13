#include "io.h"

// 5. A+B -3   https://www.acmicpc.net/problem/10950
void MultipleCalculate() {
  int LoopCount, Value1, Value2; // 초기화 해도 되고 안해도 됨. 
  // int LoopCount, Value1, Value2 = 0; 도 가능.                             
  cout << "반복 횟수를 입력하세요." << endl;
  cin >> LoopCount;

  for (int i = 0; i < LoopCount; i++) {
    cout << "두 수를 입력해주세요." << endl;
    cin >> Value1; // 입력받는 값이 초기값 -> 초기화 해도 되고 안해도 됨.
    cin >> Value2;
    cout << "합 : " << Value1 + Value2 << endl;
  }
}

// 초기화 : 값을 넣어준다

// 6. 영수증   https://www.acmicpc.net/problem/25304
void Receipt() {  // 갯수 세기, 더하기 등은 무조건 초기화 해줘야함.  
  int TotalPrice = 0;
  int Count = 0;
  int Price = 0;
  int Number = 0;
  int SumPrice = 0;

  cout << "구입 총 금액 : " << endl;
  cin >> TotalPrice;
  cout << "물건 종류 수 : " << endl; // 반복횟수
  cin >> Count;

  // 0에서 시작하면 Count에 부등호 = 가 들어가면 안된다. 1부터 하고싶으면 -->
  // for(int i=1; i<=Count; i++ ) 가능 또는  for(int i=0; i<Count; i++ )
  for (int i = 1; i <= Count;
       i++) // 0번 물건은 없으니까 1로 해주자. 상황에 맞게하면됨.
  {
    cout << i << "번 물건 가격 : " << endl;
    cin >> Price;
    cout << i << "번 물건 개수 : " << endl;
    cin >> Number;
    cout << i << "번 물건 총 가격 : " << Price * Number << endl;
    SumPrice += Price * Number; // SumPrice = SumPrice + (Price * Number);
  }

  // if 구문
  if (TotalPrice == SumPrice) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  // 3항연산
  // cout << ((TotalPrice == SumPrice) ? "Yes" : "No" );
}

// 별찍기-2    https://www.acmicpc.net/problem/2438
// 하나의 loop 은 가로로, 다른 loop 하나는 세로로 넣어야함.

void Star1() {
  int i = 0;
  int j = 0;

  for (i = 1; i <= 5; i++) // 바깥쪽 loop 에서 줄을 바꿔줌
  {
    for (j = 1; j <= i; j++) // 가로 방향으로 점 찍힘
    {
      cout << "*";
    }
    cout << endl;
  }
}

// 별찍기-2    https://www.acmicpc.net/problem/2439
// 오른쪽으로 갈때 공백 추가해야함
// 중첩 loop 안쪽에 있는 애들 조정해주면 별찍기 문제 잘 풀 수 있음

void Star2() {
  int i = 0;
  int j = 0;
  int k = 0;


  for (i = 0; i < 5; i++) {
  for (j = 1; j <= (5 - i); j++) // 가로 방향으로 점 찍힘  
  // for (j = 5; j >= 1; j--) 도 가능 
    {
      cout << "*";
    }
    cout << endl; // 바깥쪽 loop 에서 줄을 바꿔줌
  }

  



  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= (5 - i); j++) // 가로 방향으로 점 찍힘
    {
      cout << "  "; // 빈공간   두 번 띄우기 
    }
    for (k = 1; k <= i; k++) // 별공간     가로 방향으로 점 찍힘   
    {
      cout << "* ";
    }

    cout << endl; // 바깥쪽 loop 에서 줄을 바꿔줌
  }

}
