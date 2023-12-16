// 왼쪽 또는 오른쪽으로 정렬해서 출력하기

#include <stdio.h>

void main()
{
	int data = 7;

	printf("[%5d]\n", data);	// [    7]
	printf("[%05d]\n", data); // [00007]
	printf("[%-5d]\n", data); // [7    ]
}