// 실수 값을 지수 형태로 출력하기

#include <stdio.h>

void main()
{
    float data = 12.34f;

    printf("%f\n", data); // 12.340000
    printf("%e\n", data); // 1.234000e+01
    printf("%E\n", data); // 1.234000E+01
}