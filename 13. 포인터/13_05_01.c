// int형 변수에 저장된 값을 1바이트 단위로 출력하기

#include <stdio.h>

void main()
{
	int data = 0x12345678;
	char *p = (char *)&data;

	// p의 주소 값을 변경하지 않고 data 변수 값을 1바이트씩 출력
	for (int i = 0; i < 4; i++)
	{
		printf("%X, ", *(p + i)); // p는 char *형이라서 저장된 시작 주소에서 1바이트 크기만 사용함
	}
	printf("\n"); // 78, 56, 34, 12,

	// p가 가지고 있는 주소 값을 옮기는 방식으로 작업
	for (int i = 0; i < 4; i++) // 4바이트 데이터를 바이트 단위로 값을 출력하기 위해서 4번 반복함
	{
		printf("%X, ", *p); // p는 char *형이라서 저장된 시작 주소에서 1바이트 크기만 사용
		p++;								// p가 char *형이라서 1바이트 뒤에 있는 주소로 값이 변경됨
	}											// 78, 56, 34, 12,
	printf("\n");
}