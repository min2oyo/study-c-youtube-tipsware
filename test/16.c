// 3차원 메모리 동적 할당하기
// char data[2][3][4]를 포인터와 동적 할당을 이용해서 구현

#include <malloc.h>

int main()
{
	char ***p = (char ***)malloc(sizeof(char **) * 2);

	for (int i = 0; i < 2; i++)
	{
		*(p + i) = (char **)malloc(sizeof(char *) * 3);
		for (int j = 0; j < 3; j++)
		{
			*(*(p + i) + j) = (char *)malloc(sizeof(char) * 4);
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			free(*(*(p + i) + j));
		}
		free(*(p + i));
	}
	free(p);

	return 0;
}