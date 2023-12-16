// 중첩된 if 조건문을 사용해 날짜, 월, 연도 증가시키기

#include <stdio.h>

void main()
{
	int year = 2015;
	int month = 12;
	int day = 31;

	day++;

	if (day > 31)
	{
		month++;
		day = 1;

		if (month > 12)
		{
			year++;
			month = 1;
		}
	}

	printf("Date: %d년 %d월 %d일\n", year, month, day);
}