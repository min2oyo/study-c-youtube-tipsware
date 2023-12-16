// % 키워드 중심의 출력 특성 확인하기

#include <stdio.h>

void main()
{
	int data1 = -1;
	unsigned int data2 = 4294967295;

	printf("%d\n", data1); // -1
	printf("%u\n", data1); // 4294967295
	printf("%d\n", data2); // -1
	printf("%u\n", data2); // 4294967295
}