// 실수 값 출력할 때 칸 수 지정하기

#include <stdio.h>

void main()
{
	double data = 3.141592;

	printf("[%f]\n", data);			// [3.141592]
	printf("[%.4f]\n", data);		// [3.1416]
	printf("[%8.4f]\n", data);	// [  3.1416]
	printf("[%-8.4f]\n", data); // [3.1416  ]
}