#include "io.h"

void StatementIf()
{
// if     if는  else if 쓰든 else 쓰든 꼭 같이 써야함.

// 총점이 60 이상이면 "합격" 출력
int Total1 = 70;
if(Total1 >= 60)
{
cout << "합격" << endl;
}

// 총점이 60 이상이면 "합격" 출력, 아니면 "불합격"
int Total2 = 50;
if(Total2 >= 60)
{
cout << "합격" << endl;
}
else{
cout << "불합격" << endl;
}

// 총점이 90 이상이면 "수", 80 이상이면 "우", 아니면 "재수강"
int Total3 = 85;
if(Total3 >= 90)
{
cout << "수" << endl;
}
else if(Total3 >= 80)
{
cout << "우" << endl;
}
else{
cout << "재수강" << endl;
}

// 3과목 평균점수가 60이상이면 합격, 아니면 불합격
// 각 과목당 점수가 60미만이면 과락
int Subject1 = 60;
int Subject2 = 60;
int Subject3 = 50;
int Average = (Subject1 + Subject2 + Subject3) /3;

// 평균, 과목당 점수 모두 60이상이면 합격 
// 평균 >= 60 && 과목1 >= 60 && 과목2 >= 60 && 과목3 >= 60 ---> 전체가 true 면 합격!
if(Average >=60 && Subject1 >=60 && Subject2 >=60 && Subject3 >= 60){
cout << "합격" << endl;
}
else
{
cout << "불합격" << endl;
}

int Subject4 = 0;
int Subject5 = 0;
int Subject6 = 0;

cout << "1 과목 점수를 입력해 주세요 : "; 
cin >> Subject4;
cout << "2 과목 점수를 입력해 주세요 : "; 
cin >> Subject5;
cout << "3 과목 점수를 입력해 주세요 : "; 
cin >> Subject6;

int AverageIn = (Subject4 + Subject5 + Subject6) / 3;

if(AverageIn >=60 && Subject4 >=60 && Subject5 >=60 && Subject6 >= 60){
cout << "합격" << endl;
}
else
{
cout << "불합격" << endl;
}


 // 앞에 한 switch 구문을 if 구문으로 바꿔보기
  int SubjectNumber = 0;  // 0으로 초가화
  cout << "과목 번호를 입력해주세요 : ";
  cin >> SubjectNumber;     

  if(SubjectNumber == 1)
  {
    cout << "C++" << endl;
  }
  else if(SubjectNumber == 2)
  {
    cout << "언리얼엔진" << endl;
  }
  else if(SubjectNumber == 3)
  {
    cout << "VR" << endl;
  }
  else
  {
    cout << "과목 번호를 다시 입력해주세요." << endl;
  }


}

void StatementSwithch()
{
    // 과목 번호 : 1- C++, 2-언리얼엔진, 3-VR
int SubjectNumber = 0;  // 0으로 초가화
cout << "과목 번호를 입력해주세요 : ";
cin >> SubjectNumber;      

switch(SubjectNumber)
{
  case 1:     // case 쓸때는 { } 코드블럭으로 묶지 않는다. 묶어도 의미가 없기 때문.
  cout << "C++" << endl;
  break;      // break 를 만나면 자기 자신이 포함된 코드블럭을 빠져나간다 라고 생각하면 됨.
  
  case 2:
  cout << "언리얼엔진" << endl;
  break;
  
  case 3:
  cout << "VR" << endl;
  break;

  default:                       // if 구문에서 else 와 맥락이 비슷함.
  cout << "과목 번호를 다시 입력해주세요." << endl;
}
}

void StatementNestedIf()
{
      
  int a = 10;
  int b = 20;
  int c = 30;

  if(a<b)
  {
    cout << "a<b 비교식만 다루는 실행문" << endl;
    
    if(b<c)
    {
      cout << "중첩 IF" << endl;
    }
  }

  if(a<b && b<c)
  {
    cout << "AND 연산 IF" << endl;
  }

  }

void StatementFor()
{
  // For Loop
// 꼭 i 변수를 사용할 필요는 없으나 보통 i 를 사용함.
// count 를 할때 보통 정수 integer를 가지고 하니까 i를 쓴다는 설, iterate(iterable,반복하는) 의 i 라는 설이 있다.
  for(int i = 0; i < 10; i++)
  {
      cout << i;
  }

  cout << endl;    // 줄바꿈

  int StepSum = 0; 
  for(int i=0; i<=10; i++)
  {
    StepSum = StepSum + i;

    cout << StepSum << " : ";
  }

  cout << endl;  

  int StepSum2 = 0; 
  for(int i = 1; i <= 10; i += 2)
  {    // 2씩 증가시키고 싶을때    
    StepSum2 = StepSum2 + i;

    cout << StepSum2 << " : ";
  }

  cout << endl;  
  
  for(int i=1; i<=9; i++)
  {    // 구구단 2단 출력하고 싶을때 
    cout << 2 * i << " : ";
  }

  cout << endl;  
  
// 중첩 for 
  for(int i=2; i<=9; i++)
  {
    for(int j=1; j<=9; j++)
      {
        cout << i * j << " : ";
      }
    cout << endl;    // 줄바꿈은 여기에 넣어주면 됨. 각 단이 바뀔때마다 줄바꿈이 됨. 
  }


}

void StatementWhile()
{
  // while       while에는 무조건 조건식은 들어가야한다. 안그럼 무한 루프에 빠질 위험! 즉,
// while(true){ } 가 되면 무한 루프에 빠질 수 있으니 주의하기

  int LoopNumber = 0;
  while(LoopNumber <=10)
  {
    cout << LoopNumber << " : ";

    LoopNumber++;
  }

  cout << endl; 

// 위의 경우라면 for 쓰지 궃이 while 안쓰게됨. 그런데 로그인 시도할때 이런 경우에 while 쓰면 좋음! 
  int IdNumber = 123456;
  int InputId = 0;
  while(true)
  {
    cout << "로그인 ";  
    cin >> InputId;

    if(InputId == IdNumber)
    {
      cout << "로그인 성공!" << endl;
      break;      // 아이디가 맞다면 빠져나갈 수 있게 해줌. break는 가장 바깥쪽 코드블럭까지 빠져나갈 수 있게 해줌.
    }
    else
    {
      cout << "다시 입력해주세요." << endl;
    }
  }
}



int GuGuDan(int Dan)     
{
  int result  = 0; // 초기화 시켜주는것이 좋다. 안하면 쓰레기값 들어갈 수도...
   for(int i=1; i<=9; i++) // 구구단 2단 출력하고 싶을때 
  {    
    // cout << 2 * i << " : "; 이거 이제 안씀. 출력은 리턴값 아님!
    result += Dan * i;   // 괄호로 꼭 묶어야하는것은 아니지만 해주는게 좋음
  } // 단을 곱한거를 전체 더한값이 나올것임.
  return result; 
}




// 전역 변수(Global Scope)
int GlobalValue = 10; //main( ) 도 함수다 완전히 Global 전역변수로 쓰려면, main( ) 바깥에(위)에 써야함.


void VarScope(int Number)
{
  int FunctionValue = 20;   // 함수지역변수

  if(true) 
  {
    int BlockValue = 30;   // 블럭지역변수 

  cout << "전역변수 값 : " << GlobalValue << endl;
  cout << "함수지역변수 값 : " << FunctionValue << endl;
  cout << "블럭지역변수 값 : " << BlockValue << endl;
  cout << "파라미터 값 : " << Number << endl; 
  }

  cout << "전역변수 값 : " << GlobalValue << endl;
  cout << "함수지역변수 값 : " << FunctionValue << endl;
  // cout << "블럭지역변수 값 : " << BlockValue << endl;
  cout << "파라미터 값 : " << Number << endl; 
}