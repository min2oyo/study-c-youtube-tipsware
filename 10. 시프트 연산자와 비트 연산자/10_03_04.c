// 변수의 특정 비트를 0 또는 1로 변경하는 예제

#include <stdio.h>

unsigned char ModifyBit(unsigned char dest_data, unsigned char bit_num, char value) // dest_data 변수의 bit_num 번째 있는 비트를 0으로 설정하는 함수. 해당비트가 0으로 설정된 값을 반환함
{
	unsigned char mask;

	if (bit_num < 8) // 1 바이트 변수라서 비트이동은 0 ~ 7까지 가능
	{

		mask = 0x01 << bit_num; // bit_num 번째 비트에 값을 설정하는데 사용할 숫자를 구성함
		if (value == 1)					// 1로 설정하는 경우
			dest_data = dest_data | mask;
		else // 0으로 설정하는 경우
			dest_data = dest_data & ~mask;
	}

	return dest_data;
}

void main()
{
	unsigned char lamp_state = 0x7F; // 0x7F → 0111 1111
	printf("%X->", lamp_state);			 // 변경 전 값 출력

	lamp_state = ModifyBit(lamp_state, 3, 0); // lamp_state 변수의 3번째 비트를 0으로 설정	// 0x77 → 0111 0111
	printf("%X->", lamp_state);								// 변경 후 값 출력

	lamp_state = ModifyBit(lamp_state, 3, 1); // lamp_state 변수의 3번째 비트를 1으로 설정	// 0x7F → 0111 1111
	printf("%X\n", lamp_state);								// 변경 후 값 출력
}