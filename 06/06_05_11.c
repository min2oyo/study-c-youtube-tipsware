#include <stdio.h>

void main()
{
    double data = 3.141592;
    /* 자릿수 확인을 위해 [ ] 문자를 사용함 */
    printf("[%f] [%.4f] [%8.4f] [%-8.4f]", data, data, data, data);
}