// 문자열을 입력 받을 때 키 입력 횟수 제한하기

#include <stdio.h>

int GetMyString(char buffer[], int limit)
{
	int i;

	for (i = 0; i < limit; i++)
	{
		buffer[i] = getchar();
		if (buffer[i] == '\n') // [Enter] 키가 체크되면 사용자의 입력이 완료 되었다는 뜻으로 문자열을 완성시키고 함수 종료
		{
			buffer[i] = 0;
			return 1;
		}
	}

	buffer[i] = 0; // 반복문을 빠져 나왔다는 뜻은 입력 개수 제한을 초과했다는 뜻이기 때문에 현재 위치에 0을 넣고 문자열 구성을 완료
	rewind(stdin); // 표준 입력 버퍼에 남아있는 문자들을 제거

	return 0; // 입력 초과 현상이 발생했음을 알림
}

void main()
{
	char temp[10];
	int state = GetMyString(temp, 9); // 사용자에게 최대 9개까지만 입력받겠다고 제안

	if (state == 1)
		printf("input: %s\n", temp);
	else
		printf("input: %s -> out of range\n", temp);
}