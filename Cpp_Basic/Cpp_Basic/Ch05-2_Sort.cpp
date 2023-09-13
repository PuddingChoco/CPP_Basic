#include "io.h"

void  BubbleSort()
{
  int Number[10] ={3,9,5,8,10,1,7,4,2,6};
  int temp;


  for(int i=9; i>0; i--) // 0 ~ (i-1) 반복 
  {
    for(int j=0; j<i; j++)  
      // 안쪽 loop 는 계속 비교하는 애들, j번째와 j+1번째 요소가 크기순이 아니면 교환
      // 비교, 교환(swap)
      {
        if(Number[j] > Number[j+1]) // 0자리 있는게 1자리에 있는것보다 작으면 바꿔.
        {
          // 교환(swap)
          temp = Number[j];
          Number[j] = Number[j+1];
          Number[j+1] = temp;
        }
      }
  }

  // 정렬 결과 출력 
  for(int i=0; i<10; i++)
  {
    cout << Number[i] << " : ";
  }

  cout << endl;
}