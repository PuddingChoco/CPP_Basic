//#include "io.h";
//
//// 문제 1 : 개수세기   https://www.acmicpc.net/problem/10807
//
//// Counter, Number[], FindNumber는 바로 값 입력 받는 애들이기 때문에 0으로 초기화 해줄필요는 없다. 받는값이 초기화 값이기 때문.
//void CountNumber()
//{
//  int Counter = 0;
//  cout << "숫자 개수를 입력해 주세요 : ";
//  cin >> Counter;
//
//  //int Number[Counter];    ---> 나중에 동적할당으로 하기. 
//  for(int i=0; i<Counter; i++)
//  {
//    cout << "수 데이터를 입력해 주세요 : ";
//    cin >> Number[i]; 
//  }
//
//  int FindNumber;
//  cout << "찾을 수를 입력해 주세요 : ";
//  cin >> FindNumber;
//
//  int FindCount = 0;
//  for(int i=0; i<Counter; i++)
//  {
//    if(Number[i] == FindNumber)
//    {
//      FindCount++; 
//    }
//  }
//  cout << "찾는 수의 개수는 " << FindCount << " 개 입니다.";
//}
//
//
//// 문제 2 : X 보다 작은 수   https://www.acmicpc.net/problem/10871
//void LessNumber()
//{
//  int Counter = 0;
//  cout << "숫자 개수를 입력해 주세요 : ";
//  cin >> Counter;
//
//  int FindNumber;
//  cout << "기준 수를 입력해 주세요 : ";
//  cin >> FindNumber;
//
//  int Number[Counter];
//  for(int i=0; i<Counter; i++)
//  {
//    cout << "수 데이터를 입력해 주세요 : ";
//    cin >> Number[i]; 
//  }
//
//  for(int i=0; i<Counter; i++)
//  {
//    if(FindNumber > Number[i])
//    {
//      cout << Number[i] << " : ";
//    }
//  }
//  
//}
//
//// 문제 3 : 과제 안내신 분..?   https://www.acmicpc.net/problem/5597
//// 총 범위를 1-10 까지 하고 숫자를 7개 입력하는 것으로 해보기.
//// 전체 명단 필요함 10명 ---> TotalMember
//// 과제 제출한 학생 명단 ---> 전체 명단 수보다 적다, 
//void MissingNumber()
//{
//  int Counter = 0;
//  cout << "전체 학생 수를 입력해 주세요 : ";
//  cin >> Counter;
//
//  int FindNumber;
//  cout << "과제 제출하지 않는 학생 수를 입력해주세요 : ";
//  cin >> FindNumber;
//
//// 전체 학생의 번호 데이터를 Set 
//  int TotalMember[Counter]; 
//// 처음에 선언할때는 개수로 하는거니까 Counter 가 맞음 Counter-1 이 아니고, 인덱스와 개수를 헷갈리면 안됨!  ex. TotalMember[10] -> TotalMember[0] ~ TotalMember[10]
//  for(int i=0; i<Counter; i++)   // 전체 수 받아서 기준이 되는 애를 만들어 놓음.
//  {
//    TotalMember[i] = i+1;  // 1~10 번까지 순서대로 입력됨 
//  }
//
//  // 과제 제출한 학생 번호를 Set 
//  int WorkMember[Counter - FindNumber];
//  for(int i=0; i<(Counter - FindNumber); i++)
//  {
//    cin >> WorkMember[i];  // 무작위로 입력됨 
//  }
//
//  // 제출 확인용 배열 변수를 Set 
//  bool Check[Counter];  // TotalMember 와 수가 같다. 
//  for(int i=0; i<Counter; i++) //Counter 를 모두 false로 셋팅해줌
//  {
//    Check[i] = false;
//  }
//
//  // 제출한 학생, 미제출 학생 구분 : true/ false 로 
//  for(int i=0; i<(Counter - FindNumber); i++) // 누가 냈는지 채크해줌
//  {
//    for(int j=0; j<Counter; j++)
//    {  
//      if(WorkMember[i] == TotalMember[j]) // 같은 애가 있는 경우 ---> true 로 
//      {
//        Check[j] = true;   
//      }
//    }
//  }
//
//  // 미제출 학생 번호 추출 
//  for(int i=0; i<Counter; i++)
//    {
//      if(Check[i] == false)
//      {
//        cout << i+1 << "번 안냄" << endl;
//      }
//    }
//
//}
//
//// 문제 4 : 최소, 최대    https://www.acmicpc.net/problem/10818
