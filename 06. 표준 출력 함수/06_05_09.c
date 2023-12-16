// % 키워드로 출력 칸 수 지정하기

#include <stdio.h>

void main()
{
  int data = 7;

  printf("[%d]\n", data);  // [7]
  printf("[%5d]\n", data); // [    7]
}