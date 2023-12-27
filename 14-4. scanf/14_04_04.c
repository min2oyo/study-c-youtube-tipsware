// scanf 함수를 사용하여 나이 입력 받기(1)

#include <stdio.h>

void main()
{
	int age = 0;

	while (1)
	{
		printf("input age: ");
		scanf_s("%d", &age); // 한 개의 정수 값을 입력받음

		if (age > 0 && age <= 130)
			break;
		else
			printf("Incorrect Age!!\n");
	}

	printf("your age: %d \n", age);
}
