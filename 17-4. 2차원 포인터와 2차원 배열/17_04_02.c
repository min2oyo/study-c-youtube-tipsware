// 포인터 배열로 연령별 윗몸 일이키기 횟수 관리하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void main()
{
	unsigned char limit_table[3]; // 연령별 인원수를 저장할 배열 - 사용자에게 입력 받음
	unsigned char *p[3];					// 연령별 윗몸 일으키기 횟수를 저장할 배열
	int temp;
	int sum;

	// 연령별로 윗몸 일으키기 횟수를 입력 받음
	for (int age = 0; age < 3; age++)
	{
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		printf("이 연령대는 몇 명입니까?: ");
		scanf("%d", &temp); // 해당 연령에 소속된 사람수를 입력 받음	// scanf로 unsigned char 변수에 직접 정수를 받을수 없어서 temp 변수에 정수로 입력 받은후에 limit_table 배열에 넣어 줌

		limit_table[age] = (unsigned char)temp; // 입력 받은 인원수 만큼 메모리를 할당
		p[age] = (unsigned char *)malloc(limit_table[age]);

		// 해당 연령에 소속된 사람들을 순서대로 입력 받음
		for (int member = 0; member < limit_table[age]; member++)
		{
			printf("%dth : ", member + 1); // 윗몸 일으키기 횟수를 정수로 입력 받음
			scanf("%d", &temp);						 // scanf로 unsigned char 변수에 직접 정수를 받을 수 없어서 temp 변수에 정수로 입력 받은후에 p 배열에 넣어 줌
			*(p[age] + member) = (unsigned char)temp;
		}
	}

	// 연령별로 입력된 횟수를 합산하여 평균 값을 출력
	printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");
	for (int age = 0; age < 3; age++)
	{
		sum = 0;
		printf("%d0대: ", age + 2);

		// 해당 연령에 소속된 사람들의 횟수를 합산
		for (int member = 0; member < limit_table[age]; member++)
		{
			sum += *(p[age] + member);
		}

		printf("%5.2f\n", (double)sum / limit_table[age]); // 합산값을 인원수로 나누어서 평균을 냄
		free(p[age]);																			 // 이 연령에 할당했던 동적 메모리를 해제
	}
}