// 형 변환

#include <stdio.h>

void main()
{
	int data = 0x12345678;
	char *p = (char *)&data;
	*p = 5;
	printf("%X\n", data); // 12345605
	*(short *)p = 0;
	printf("%X\n", data); // 12340000
}