// 배열 초기화 문법으로 배열의 모든 요소를 0으로 초기화하기

#include <stdio.h>

void main()
{
	short student[20] = {
			0, // 반복문 대신 쉼표를 사용해 배열의 모든 요소를 0으로 초기화 함	//  다른 값을 써도 0으로 초기화 됨
	};

	student[1] = 10;

	printf("%d %d\n", student[1], student[2]); // 10 0
}