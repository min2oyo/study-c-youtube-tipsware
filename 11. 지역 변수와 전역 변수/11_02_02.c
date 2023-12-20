// 지역 변수와 지역 변수의 이름이 같을 때 문제점 살펴보기

#include <stdio.h>
int result; // 전역변수	// 전역 변수, 특별한 초기화 값이 없으면 0으로 초기화 됨

void Sum(int data1, int data2)
{
	int result;							// 지역 변수	// 초기화 안 됨
	result = data1 + data2; // 지역 변수의 우선순위가 높기 때문에 연산결과 값은 전역 변수 result가 아닌 지역변수 result에 지정
}

void main()
{
	Sum(5, 3);
	printf("5 + 3 = %d\n", result); // 5 + 3 = 0
}