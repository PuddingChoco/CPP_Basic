#include "io.h"

// 문제1: 문자와 문자열     https://www.acmicpc.net/problem/27866
void IndexChar()
{
  char Word[20];
  int number;
  
  cout << "원하는 단어를 입력 해주세요 : ";
  cin >> Word;  // 이건 객체 이야기하고 다시 돌아와서 다른 방법으로 시도 예정. 

  cout << "출력을 원하는 자리 수를 입력해주세요.";
  cin >> number; 
  
  cout << Word[number-1];
}

// 문제2: 알파벳 찾기    https://www.acmicpc.net/problem/10809
void AlphaNumber()
{
  char Word[20]; // 가변적으로 쓰려면 Word[] 처럼 비워두면 됨.  
  int WordSize = sizeof(Word)-1;
  cout << WordSize << endl;  //  ===> 이거 나중에 다른 방법으로 정정한다고함.

  cout << "원하는 단어를 입력 해주세요 : ";
  cin >> Word;  //  ===> 이거 나중에 다른 방법으로 정정한다고함.
  // Word 와 alpha 를 비교해야함. W 일때 a~z 까지, O 일때 a~z까지 주르륵 비교해주기.
  char Alpha[] = "abcdefghijklmnopqrstvuwxyz"; // 불필요한 칸 생기니 기존 30 삭제. 얘네가 알아서 세게 하는게 좋음.
  int AlphaSize = sizeof(Alpha)-1;  // \0 포함되어 계산되니 26 아니고 27 나옴. 그래서 -1 해줌.

  
  //bool Check[30];  이거 들어가있어서 오류났었음. 
  
  // 배열변수 선언시 크기 인덱스는 변수로 지정할 수 없음
  //C++는 컴파일 언어다 => 컴파일 하는 시간에 배열 크기가 결정됨 => 크기를 변수로 지정하면 크기를 지정할 수 없음 => 즉, 숫자로 직접 넣어야함.
  // int Check[AlphaSize];

  //int Check[26]; // 30 대신 AlphaSize  ---> 리플에서는 되었지만 원래는 안되는게 정상 VS Studio 에서는 오류남. 
  int* pCheck = new int[AlphaSize];
  for(int i=0; i<AlphaSize; i++) // // 30 대신 AlphaSize (bool 로 했을땐 Check 배열 변수를 false 로 초기화 해줌)
  { 
      //Check[i] = -1;   // false 대신 -1로 해줌. 문제에 그렇게 나와있음. 
      pCheck[i] = -1;   // false 대신 -1로 해줌. 문제에 그렇게 나와있음.
  }

  
  for(int i=0; i<WordSize; i++)
  {
    for(int j=0; j<AlphaSize; j++)
      {
        if(Word[i] == Alpha[j])
        {
          //if(Check[j] == -1)
            if (pCheck[j] == -1)
          {
          //Check[j] = i;  // true 대신 i 로, Word 에서의 index 니까.
            pCheck[j] = i;  // true 대신 i 로, Word 에서의 index 니까.
          }
        }
      }
  }

  //cout << WordSize << endl;
  //cout << AlphaSize << endl;

  for(int i=0; i<AlphaSize; i++)  // 30 대신 AlphaSize
  {
    //cout << Check[i] << " ";
      cout << pCheck[i] << " ";
  }
}

