// void *를 사용하여 대상 메모리의 크기 조절하기

#include <stdio.h>

int GetData(void *p_data, char type)
{
	int result = 0;

	switch (type)
	{
	case 1:
		result = *(char *)p_data; // 0x78이 저장됨
		break;
	case 2:
		result = *(short *)p_data; // 0x5678이 저장됨
		break;
	case 4:
		result = *(int *)p_data; // 0x12345678이 저장됨
		break;
	default:
		break;
	}

	return result;
}

void main()
{
	int data = 0x12345678;
	printf("%X\n", GetData(&data, 2)); // 5678	// data 변수에서 2바이트 크기만 출력함
}