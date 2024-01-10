// 2차원 배열로 연령별 윗몸 일으키기 횟수 관리하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	unsigned char limit_table[3] = {4, 2, 3}; // 연령별 인원수. 20대 4명, 30대 2명, 40대 3명
	unsigned char count[3][4];								// 연령별 윗몸 일으키기 횟수를 저장할 배열
	int temp;
	int sum;

	for (int age = 0; age < 3; age++) // 연령별로 윗몸 일으키기 횟수를 입력 받는다
	{
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		for (int member = 0; member < limit_table[age]; member++)
		{
			printf("%dth: ", member + 1);
			scanf("%d", &temp); // 윗몸 일으키기 횟수를 정수로 입력받는다. scanf로 unsigned char 변수에 직접 정수를 받을 수 없어서 temp 변수에 정수로 입력 받은후에 count 배열에 넣어준다.
			count[age][member] = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");
	for (int age = 0; age < 3; age++) // 연령별로 입력된 횟수를 합산하여 평균 값을 출력
	{
		sum = 0;
		printf("%d0대: ", age + 2);
		for (int member = 0; member < limit_table[age]; member++) // 해당 연령에 소속된 사람들의 횟수를 합산
		{
			sum += count[age][member];
		}
		printf("%5.2f\n", (double)sum / limit_table[age]); // 합산값을 인원수로 나누어서 평균을 낸다.
	}
}