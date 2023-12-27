#include <stdio.h>
#include <stdlib.h> // atoi 함수를 사용

void main()
{
	char first_string[16];
	char second_string[16];
	int first_num;
	int second_num;

	printf("input first number: ");
	gets(first_string);
	printf("input second number: ");
	gets(second_string);

	first_num = atoi(first_string);
	second_num = atoi(second_string);

	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}