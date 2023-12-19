// 변수의 값을 2진수 형태로 확인하는 예제

#include <stdio.h>

unsigned char GetBit(unsigned char dest_data, unsigned char bit_num) // dest_data 변수의 bit_num 번째 비트 값을 반환하는 함수
{
	unsigned char bit_state = 0; // 1 바이트 변수라서 비트 이동은 0 ~ 7까지 가능

	if (bit_num < 8)
	{
		bit_state = dest_data & (0x01 << bit_num);
		bit_state = bit_state >> bit_num;
	}

	return bit_state;
}

void main()
{
	unsigned char lamp_state = 0x75; // 0x7F → 0111 0101
	unsigned char bit_state;

	printf("%X -> ", lamp_state); // 16진법으로 현재 값 출력

	for (int i = 0; i < 8; i++) // 8개의 비트 값을 모두 출력하기 위해 8번 반복
	{
		bit_state = GetBit(lamp_state, 7 - i); // 비트를 표시할 때 최상위 비트(7번 비트)부터 순차적으로 보여주기 위해서 7, 6, 5, … 순서로 비트 값을 얻음
		printf("%d", bit_state);
		if (i == 3)
			printf(" ");
	}
	printf("\n");
}