// 변수가 위치한 메모리 주소 출력하기

#include <stdio.h>

void main()
{
	short birthday;
	short *ptr;			 // 포인트 변수 선언
	ptr = &birthday; // birth 변수의 주소 대입

	printf("birthday 변수의 주소는 %p입니다.\n", ptr); // %p: 포인터 값 출력(?)
}