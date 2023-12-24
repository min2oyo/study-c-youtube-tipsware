#include <stdio.h>

// 2
void mission2()
{
	int data = 0x12345678;
	short *p = (short *)&data;
	*p = 0x0412;

	printf("2: %X\n", data); // 12340412
}

// 3
void Test(int *p)
{
	*p = 5;
}

void mission3()
{
	int tips = 0;
	Test(&tips);
	printf("3: %d\n", tips); // 5
}

// 6
void mission6()
{
	int t;
	char a = 0x12;
	char b = 0x34;
	short c = 0x5678;

	char *p = (char *)&t;
	*(short *)p = c;
	*(p + 2) = b;
	*(p + 3) = a;

	printf("6: 0x%X\n", t); // 0x12345678
}

// base
void main()
{
	mission2();
	mission3();
	mission6();
}