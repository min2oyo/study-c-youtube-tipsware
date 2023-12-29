// 포인터를 사용하여 배열의 각 요소에 저장된 값 합산하기

#include <stdio.h>

void main()
{
	char data[] = {1, 2, 3, 4, 5};
	int data_size = sizeof(data) / sizeof(char);

	int result = 0;
	char *p = data;

	for (int i = 0; i < data_size; i++)
	{
		result += *p++; // data 배열의 다음 항목으로 주소를 이동. data[0] -> data[1] -> ...
	}

	printf("data 배열의 각 요소의 합은 %d입니다\n", result);
}