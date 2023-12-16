// for 반복문과 함수를 사용하여 구구단 5단 출력하기

#include <stdio.h>

void ShowMultiplication(int step)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", step, i, step * i);
	}
}

void main()
{
	ShowMultiplication(5);
}