// gets 함수를 사용하여 두 개의 숫자를 입력 받아 합산하기

#include <stdio.h>

int ArrayToInteger(char string[])
{
	int num = 0;
	int count = 0;

	while (string[count] != 0)
	{
		num = num * 10 + string[count] - '0';
		count++;
	}

	return num;
}

void main()
{
	char first_string[16];
	char second_string[16];
	int first_num;
	int second_num;

	printf("input first number: ");
	gets(first_string);
	printf("input second number : ");
	gets(second_string);

	first_num = ArrayToInteger(first_string);
	second_num = ArrayToInteger(second_string);

	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}