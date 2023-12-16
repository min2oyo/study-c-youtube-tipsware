// putchar 함수로 문자 출력하기

#include <stdio.h>

void main()
{
	putchar('H'); // putchar 함수는 1바이트를 기준으로 출력하기 때문에 한 글자에 2바이트인 한글은 출력할 수 없음
	putchar('i');
	putchar('~');
}