// 실수형 데이터의 올바른 출력과 잘못된 출력 비교하기

#include <stdio.h>

void main()
{
    float value = 2.1f;
    printf("%f, %d", value, value);
    // value 변수 값을 실수 형식과 정수 형식으로 출력
    // -1073741824(%d), C0000000(%x), 3221225472(%u)는 출력 옵션을 잘못 지정해서 printf 함수가 오류 값을 출력한 것임
}