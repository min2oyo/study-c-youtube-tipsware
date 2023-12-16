// % 키워드에 의한 데이터 크기 변화 확인하기

#include <stdio.h>

void main()
{
	char data = -1; // 1바이트

	printf("%d\n", data); // -1 // 4바이트
	printf("%u\n", data); // 4294967295 // 4바이트
}