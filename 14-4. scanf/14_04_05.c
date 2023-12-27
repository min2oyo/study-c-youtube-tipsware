#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1
void mission1()
{
	int num1;
	int num2;
	int num3;

	printf("숫자 입력1: ");
	scanf("%d", &num1);
	printf("숫자 입력2: ");
	scanf("%d", &num2);
	printf("숫자 입력3: ");
	scanf("%d", &num3);
	rewind(stdin);

	printf("평균: %d\n", (num1 + num2 + num3) / 3);
}

// 2
void mission2()
{
	char input1[32];
	char input2[32];
	int length;

	printf("문자 입력1: ");
	fgets(input1, sizeof(input1), stdin);
	printf("문자 입력2: ");
	fgets(input2, sizeof(input2), stdin);

	length = strlen(input1);
	if (length > 0)
		input1[length - 1] = 0; // \n 제거
	strcat(input1, input2);

	printf("결과: %s", input1);
}

// 3
mission3()
{
	char name[10];
	float weight;
	float tall;
	char blood;
	int heart;

	printf("개인정보 입력: ");
	scanf("%s %f %f %c %d", name, &weight, &tall, &blood, &heart);
	rewind(stdin);
	printf("이름: %s, 몸무게: %.1fkg, 키: %.1fcm, 혈액형: %c, 심박수: %d\n", name, weight, tall, blood, heart);
}

// 4
mission4()
{
	char students[3][32];
	int korean[3];
	int english[3];
	int math[3];

	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 학생 이름: ", i + 1);
		scanf("%s", students[i]);
		rewind(stdin);

		printf("국어 점수: ");
		scanf("%d", korean[i]);
		rewind(stdin);

		printf("영어 점수: ");
		scanf("%d", english[i]);
		rewind(stdin);

		printf("수학 점수: ");
		scanf("%d", math[i]);
		rewind(stdin);
	}
	printf("---\n");
	printf("이름	국어	영어	수학	총점	평균	등수\n");
	printf("---\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d %d %d %d", students[i], korean[i], english[i], math[i]);
	}
}

// base
void main()
{
	// mission1();
	// mission2();
	// mission3();
	mission4();
}