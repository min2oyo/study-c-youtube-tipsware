// scanf 함수를 사용하여 문자열 입력 받기

#include <stdio.h>

void main()
{
	char temp[32];

	scanf_s("%s", temp, sizeof(temp)); // 배열 변수 이름을 사용하면 해당 배열의 시작 주소를 의미하기 때문에 &연산자를 쓰면 안 됨

	printf("input string: %s\n", temp);
}
