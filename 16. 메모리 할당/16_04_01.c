// 정적 메모리 할당을 사용하여 숫자를 입력 받아 합산하기 (메모리가 고정적이라 안 좋은 방법)

#define _CRT_SECURE_NO_WARNINGS
#define MAX_COUNT 5
#include <stdio.h>

// 소스코드를 단순화하기 위해서 최대한 예외 처리는 생략
void main()
{
	int num[MAX_COUNT];
	int count = 0;
	int sum = 0;

	while (count < MAX_COUNT) // 사용자가 최대 5회까지 입력을 받음, 중간에 9999를 누르면 종료 함
	{
		printf("숫자를 입력하세요 (9999를 누르면 종료): ");
		scanf("%d", num + count); // scanf("%d", &num[count]); 과 동일한 표현

		if (num[count] == 9999)
			break; // 9999를 눌렀으면 입력 중단

		count++; // 입력된 횟수 계산
	}

	for (int i = 0; i < count; i++) // 입력된 횟수만큼 숫자를 출력
	{
		if (i > 0)
			printf(" + "); // 숫자와 숫자 사이에 + 를 출력 함

		printf(" %d ", num[i]); // 입력한 숫자 출력
		sum += num[i];					// 입력한 숫자들을 합산함
	}

	printf(" =  %d\n", sum); // 합산 값을 출력 함
}