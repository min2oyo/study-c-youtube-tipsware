// 공백 문자로 구분해서 scanf 함수로 8, 10, 16진수 입력 받기

#include <stdio.h>

void main()
{
	int num1;
	int num2;
	int num3;

	scanf_s("%o %d %x", &num1, &num2, &num3);					 // 8, 10, 16진수 값 입력받음
	printf("input : %d, %d, %d \n", num1, num2, num3); // 100 입력	// 64, 100, 256
}
