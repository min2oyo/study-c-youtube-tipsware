// 조건 수식이 참일 때 복합 명령 문장 실행하기

#include <stdio.h>

void main()
{
	int score = 92;
	char grade;

	if (score > 90)
	{
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}

	printf("작업 종료 \n");
}