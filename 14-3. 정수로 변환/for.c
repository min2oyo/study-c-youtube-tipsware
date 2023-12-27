#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	char num_string[] = "123";
	char count = strlen(num_string);
	int num = 0;											// 정수로 변환될 숫자
	int pos_num = pow(10, count - 1); // 각 자릿수에 곱할 숫자

	for (int i = 0; i < count; i++) // 문자열 마지막의 0은 제외로 -1 처리
	{
		num += (num_string[i] - '0') * pos_num; // 정수화된 숫자에 자릿수에 해당하는 숫자를 곱해서 합산
		pos_num /= 10;													// 다음 자릿수를 구성하기 위해서 10을 나눔. 100 → 10 → 1
	}

	printf("%s -> %d\n", num_string, num);
}