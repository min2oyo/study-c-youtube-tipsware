#include <stdio.h>

void main()
{
	char num_string[4] = "123";
	int count = 0;
	int num = 0;

	while (num_string[count] != 0)
	{
		num = num * 10 + (num_string[count] - '0');
		count++;
	}

	printf("%s -> %d\n", num_string, num);
}