// 동적 메모리 할당을 사용하여 숫자를 입력 받아 합산하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h> // malloc, free 함수를 사용

// 소스코드를 단순화하기 위해서 최대한 예외 처리는 생략
void main()
{
	int count = 0;
	int sum = 0;
	int limit = 0;

	int *p_num_list;

	printf("사용할 최대 개수를 입력하세요: ");
	scanf("%d", &limit);

	p_num_list = (int *)malloc(sizeof(int) * limit); // 사용자가 입력한 개수만큼 정수를 저장할 수 있는 메모리를 할당

	while (count < limit) // 사용자가 최대 5회까지 입력을 받음, 중간에 9999를 누르면 종료 함
	{
		printf("숫자를 입력하세요 (9999를 누르면 종료): ");
		scanf("%d", p_num_list + count);

		if (*(p_num_list + count) == 9999) // 9999를 눌렀으면 입력 중단
			break;

		count++;
	}
	// 입력된 횟수만큼 숫자를 출력 해줌
	for (int i = 0; i < count; i++)
	{
		if (i > 0)
			printf(" + "); // 숫자와 숫자 사이에 + 를 출력 함

		printf(" %d ", *(p_num_list + i)); // 입력한 숫자 출력

		sum += *(p_num_list + i); // 입력한 숫자들을 합산함
	}

	printf(" = %d\n", sum); // 합산 값을 출력 함
	free(p_num_list);				// 사용했던 메모리를 제거
}