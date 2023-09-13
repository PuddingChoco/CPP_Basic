#include "io.h"

// 1. 두 수 비교하기 문제풀이    https://www.acmicpc.net/problem/1330
void SizeComparison()
{
  int Value1 = 0;
  int Value2 = 0;
  cout << "첫 번째 값을 입력해주세요.";
  cin >> Value1;
  cout << "두 번째 값을 입력해주세요.";
  cin >> Value2;

  if(Value1 > Value2)
  {
    cout << ">" << endl;
  }
  else if(Value1 < Value2)
  {
    cout << "<" << endl;
  }
  else
  {
    cout << "==" << endl;
  }
}

// 2. 윤년 문제        https://www.acmicpc.net/problem/2753
void LeapYear()    
{
  int Year;
  cout << "연도를 입력해 주세요.";
  cin >> Year;

  // 4의 배수 이면서(그리고, AND, &&) 100의 배수가 아니다.  400의 배수여야함.
  // 4의 배수인지 판별 : Year % 4 == 0 
  // 100의 배수가 아니다 : Year % 100 ! = 0 
  // 400의 배수 : Year % 400 == 0
  // ((Year % 4 == 0) && (Year % 100 ! = 0)) || Year % 400 == 0
  // (1 + 2) * 3 과 같은 원리 

  if((Year % 4 == 0) && (Year % 100 != 0) || Year % 400 == 0)
    {
      cout << "윤년" << endl;
    }
  else
    {
      cout << "윤년이 아닙니다" << endl;
    }
}

// 3. 사분면 고르기   https://www.acmicpc.net/problem/14681
// 내가한것:
/*
  void Quadrant()    // Quadrant 사분면 이라는 뜻
{
  int X, Y;
  cout << "x, y 를 입력해 주세요." << endl;
  cout << "x : ";
  cin >> X;
  cout << "y : ";
  cin >> Y;

  if(X>0 && Y>0)
  {
    cout << "1사분면 입니다.";
  }
  else if(X>0 && Y<0)
  {
    cout << "4사분면 입니다";
  }
  else if(X<0 && Y>0)
  {
    cout << "2사분면 입니다";
  }
  else
  {
    cout << "3사분면 입니다";
  }
}
*/
// 선생님 풀이:
void Quadrant()
{
  int x;   // 변수가 한 글자인 경우에는 소문자로 하는게 일반적 
  int y;
  cout << "x 값 입력 : ";
  cin >> x;
  cout << "y 값 입력 : ";
  cin >> y;

  // 1사분면  x>0 && y>0 : 모두 양수
  // 2사분면  x<0 && y>0 : x 음수, y 양수
  // 3사분면  x<0 && y<0 : x 음수, y 음수
  // 4사분면  x>0 && y<0 : x 양수, y 음수

  if(x>0 && y>0)
  {
    cout << "1사분면" << endl;
  }
  else if(x<0 && y>0)
  {
    cout << "2사분면" << endl;
  }
  else if(x<0 && y<0)
  {
    cout << "3사분면" << endl;
  }
  else
  {
    cout << "4사분면" << endl;
  }

}

// 4. 오븐시계   https://www.acmicpc.net/problem/2525
// 내가한것: 풀긴 풀었는데 별로임
/* 
void OvenTime()
{
  int Hour;
  int Min;
  int NecessaryTime;
  int result;
  
  cout << "시작시간을 입력하세요";
  cin >> Hour;
  cout << "시작 분을 입력하세요";
  cin >> Min;
  cout << "필요한 시간을 입력하세요";
  cin >> NecessaryTime;

  cout << endl;

  if(Min + NecessaryTime > 60)
  {
    Hour += 1; 
  }
    cout << Hour << endl;
  
  if(Min + NecessaryTime > 60)
  {

    result = (Min + NecessaryTime) - 60;
    cout << result << endl; 
  } 
}
*/

// 선생님 풀이:
void OvenTime()
{
  int StartHour, StartMin, CookingTime; 

// 입력 받은 값에 대해서 시간 범위안에 포함되는지 여부 판단 (입력받는 부분에서 처리됨 151~156 사이)
// 범위를 벗어나는 값이 입력되면 메시지를 출력하고 다시 입력을 받게하자

  while(true)
    {
      cout << "시작하는 시간 시 입력 : ";
      cin >> StartHour;  
      
      // 올바른 값이 입력되었을때 끝나도록(break) 해야함.
      // 0 <= ShartHhour <= 23  --> 인데, 프로그래밍에서는 이렇게 표현 안됨 -> 분리해야함.
      // StartHour >= 0, StartHour <= 23 해놓고 같이 가는 애들이니 논리연산자 && 쓰기 
      // StartHour >= 0 && StartHour <= 23
      if(StartHour >= 0 && StartHour <= 23)
      {
        break;
      } 
      else{
        cout << "잘못 입력 하셨습니다." << endl;
      }
    }

  while(true)
    {
      cout << "시작하는 시간 분 입력 : ";
      cin >> StartMin;
      
      if(StartHour >= 0 && StartHour <= 59)
      {
        break;
      } 
      else{
        cout << "잘못 입력 하셨습니다." << endl;
      }
    }

  while(true)
    {
     cout << "요리 시간 입력 : ";
     cin >> CookingTime;
      
      if(StartHour >= 0 && StartHour <= 1000)
      {
        break;
      } 
      else{
        cout << "잘못 입력 하셨습니다." << endl;
      }
    }

  // 시작 시간의 분과 요리 시간의 분 값을 더했을 때 60이 넘었을 때
  // 시 부분에 1을 증가시키고 분 값은 60을 뺀 값으로 출력
  // (이렇게 하는게 쪼개기(분해)이다. 말로 써보면 문제 풀때 좋음)

  // 결과값은 소수점으로 나오지만 AddHour 가 int 이기 때문에 저절로 정수가 됨. 
  int AddHour = (StartMin + CookingTime) / 60; 
  int FinishMinute = (StartMin + CookingTime) % 60; 


  // 시작 시간에 요리 시간으로 추가되는 시간을 더했을때 24가 넘었을 때 
  // 시간을 0부터 시작하도록 조정해줌. 
  int FinishHour = (StartHour + AddHour) % 24;
  
  // cout << StartHour << " : " << StartMin + CookingTime << endl;
  cout << FinishHour << " : " << FinishMinute << endl;

}


