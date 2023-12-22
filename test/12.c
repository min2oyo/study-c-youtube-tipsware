#include <stdio.h>

void main()
{
	short data[] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
	int result = 0;

	// 1.
	int num = 6;
	printf("1: %d행 %d열\n", 6 / 3 + 1, 6 % 3 + 1); // 3행 1열
	result = 0;

	// 2
	for (int i = 0; i < sizeof(data) / sizeof(short); i += 2)
		result += data[i];
	printf("2: %d\n", result); // 28
	result = 0;

	// 3
	for (int i = 0; i < sizeof(data) / sizeof(short); i++)
		if (result < data[i])
			result = data[i];
	printf("3: %d\n", result);

	// 4
	char go[3][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

	go[5 / 4][5 % 4] = 1;		// black
	go[11 / 4][11 % 4] = 1; // white

	printf("4: ");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			printf("%d", go[i][j]);
	printf("\n");

	// 5
	int numbers[] = {6, 3, 9, 7, 2, 4, 1};
	int numbers_length = sizeof(numbers) / sizeof(int);
	int temp;

	printf("5: ");
	for (int i = 0; i < numbers_length; i++)
	{
		for (int j = i + 1; j < numbers_length; j++)
		{
			if (numbers[i] > numbers[j])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
		printf("%d", numbers[i]);
	}
	printf("\n");
}
