// 배열에 문자열을 저장하고 출력하기

#include <stdio.h>

void main()
{
	char data[6] = {'h', 'a', 'p', 'p', 'y', 0}; // char data[] = "happy";와 같은 표현
	char ment[] = "C programming~";							 // [ ] 에 15를 생략한 표현

	printf("%s\n", data); // happy
	printf("%s\n", ment); // C programming~
}