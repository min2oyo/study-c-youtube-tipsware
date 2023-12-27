// scanf 함수를 사용하여 정수와 실수 값 입력 받기

#include <stdio.h>

void main()
{
	int int_data;
	float float_data;

	printf("정수: ");
	scanf_s("%d", &int_data);
	printf("실수: ");
	scanf_s("%f", &float_data);

	printf("input: %d, %f\n", int_data, float_data);
}