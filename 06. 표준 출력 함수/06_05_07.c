// 정수 값을 여러 가지 진법으로 출력하기

#include <stdio.h>

void main()
{
    int data1 = 10;   // 10진수
    int data2 = 010;  // 8진수
    int data3 = 0x10; // 16진수

    printf("%x\n", data1); // a     // 16진수
    printf("%d\n", data2); // 8     // 10진수
    printf("%o\n", data3); // 20    // 8진수
}