#include <stdio.h>
#include <malloc.h> /* malloc, free 함수를 사용하기 위해서 */

void main()
{
    char *p_name;
    p_name = (char *)malloc(32); /* 32 바이트의 메모리를 동적할당 함 */
    if (p_name != NULL)
    {
        /* 메모리 할당에 성공한 경우 */
        printf("Your name : ");
        gets(p_name); /* 이름을 입력 받음 */

        printf("Hi~ %s\n", p_name); /* 입력 받은 이름을 출력. */
        free(p_name);               /* 동적 할당된 메모리를 해제 */
    }
    else
    {
        /* 메모리 할당에 실패한 경우 */
        printf("Memory allocation error!!");
    }
}
