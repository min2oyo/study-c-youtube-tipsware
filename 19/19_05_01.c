#include <stdio.h>

void main()
{
    int data = 0x00000412;
    FILE *p_file = fopen("jin.dat", "wb"); /* 쓰기 모드로 바이너리 파일을 연다 */
    if (NULL != p_file)
    { /* 파일 열기에 성공한 경우 */
        /* data의 시작주소부터 4바이트 크기만큼 1번만 파일(p_file)에 저장 */
        fwrite(&data, sizeof(int), 1, p_file);
        fclose(p_file); /* 파일을 닫는다 */
    }
}