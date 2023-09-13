#include "io.h"

// 문제1: 문자와 문자열     https://www.acmicpc.net/problem/27866
void IndexChar()
{
  char Word[20];
  int number;
  
  cout << "원하는 단어를 입력 해주세요 : ";
  cin >> Word;

  cout << "출력을 원하는 자리 수를 입력해주세요.";
  cin >> number; 
  
  cout << Word[number-1];
}

// 문제2: 알파벳 찾기    https://www.acmicpc.net/problem/10809
void AlphaNumber()
{
  char Word[20]; // 가변적으로 쓰려면 Word[] 처럼 비워두면 됨.  
  int WordSize = sizeof(Word)-1;

  cout << "원하는 단어를 입력 해주세요 : ";
  cin >> Word;
  // Word 와 alpha 를 비교해야함. W 일때 a~z 까지, O 일때 a~z까지 주르륵 비교해주기.
  char Alpha[] = "abcdefghijklmnopqrstvuwxyz"; // 불필요한 칸 생기니 기존 30 삭제. 얘네가 알아서 세게 하는게 좋음.
  int AlphaSize = sizeof(Alpha)-1;  // \0 포함되어 계산되니 26 아니고 27 나옴. 그래서 -1 해줌.

  
  //bool Check[30];  이거 들어가있어서 오류났었음. 
  int Check[AlphaSize]; // 30 대신 AlphaSize
  for(int i=0; i<AlphaSize; i++) // // 30 대신 AlphaSize (bool 로 했을땐 Check 배열 변수를 false 로 초기화 해줌)
  {
    Check[i] = -1;   // false 대신 -1로 해줌. 문제에 그렇게 나와있음. 
  }

  
  for(int i=0; i<WordSize; i++)
  {
    for(int j=0; j<AlphaSize; j++)
      {
        if(Word[i] == Alpha[j])
        {
          if(Check[j] == -1)
          {
          Check[j] = i;  // true 대신 i 로, Word 에서의 index 니까.
          }
        }
      }
  }

  //cout << WordSize << endl;
  //cout << AlphaSize << endl;

  for(int i=0; i<AlphaSize; i++)  // 30 대신 AlphaSize
  {
    cout << Check[i] << " ";
  }
}

