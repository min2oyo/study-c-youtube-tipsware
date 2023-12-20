// 변수의 사용 범위에 따른 유효성 이해하기

#include <stdio.h>

int Sum(int data1, int data2) // 5와 3으로 초기화 됨
{
	int result = data1 + data2; // 지역 변수	// data + data2 값으로 초기화 됨

	return result;
}

void main()
{
	int result; // 지역 변수	// 지역 변수는 초기화 되지 않아서 어떤 값이 들어있을지 모름
	result = Sum(5, 3);

	printf("5 + 3 = %d\n", result); // 5 + 3 = 8
}