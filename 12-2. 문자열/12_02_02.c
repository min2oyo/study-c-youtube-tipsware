// 배열에 저장된 문자열의 길이를 구하는 함수 만들기

#include <stdio.h>

int GetStringLength(char data[]) // 매개변수 data의 []는 숫자를 적지 않아도 됨	// 실제로 전달되는 배열의 크기에 영향을 받기 때문에 여기에 어떤 숫자를 적어도 무시됨
{
	int count = 0;

	while (data[count])
		count++;

	return count;
}

void main()
{
	char data[] = {
			'h',
			'a',
			'p',
			'p',
			'y',
			0,
	};
	int data_length = GetStringLength(data);

	printf("data length = %d\n", data_length); // data length = 5
}