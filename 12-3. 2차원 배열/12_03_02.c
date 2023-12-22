// 2차원 배열을 사용하여 바둑판 정보를 저장하고 알려주기

#include <stdio.h>

void main()
{
	char data[3][4] = {{0, 0, 2, 0}, {1, 1, 0, 0}, {2, 1, 0, 2}}; // 0: 없음, 1: 검은색, 2: 흰색 돌

	for (int i = 0; i < 3; i++) // 행
	{
		for (int j = 0; j < 4; j++) // 열
		{
			printf("%d행 %d열: ", i + 1, j + 1);
			switch (data[i][j])
			{
			case 1:
				printf("검은돌\n");
				break;
			case 2:
				printf("흰돌\n");
				break;
			default:
				printf("X\n");
				break;
			}
		}
	}
}