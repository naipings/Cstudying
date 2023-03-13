/*
结构作为函数参数：
int numberOfDays(struct date d)

整个结构可以作为参数的值传入函数
这时候是在函数内新建一个结构变量，并复制调用者的结构的值
也可以返回一个结构
这与数组完全不同
*/
#include <stdio.h>
#include <stdbool.h>

struct date {
	int month;
	int day;
	int year;
};

bool isLeap(struct date d);  //判断这一天所在的那一年是不是闰年。如果是闰年它会返回一个true；如果不是闰年它会返回一个false
int numberOfDays(struct date d);  //

int main(int argc, char const *argv[])
{
	struct date today, tomorrow;
	
	printf("Enter today's date (mm dd yyyy):");
	scanf("%i %i %i", &today.month, &today.day, &today.year);
	
	if ( today.day != numberOfDays(today) ) {  //如果这一天不是这一个月的最后一天，那么明天的day就加一，其他的不变
		tomorrow.day = today.day+1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if ( today.month == 12 ) {  //如果这是这一年的最后一天，那么明天就是下一年的第一天
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year+1;
	} else {  //如果这是其他某个月的最后一天，那么month要加一
		tomorrow.day = 1;
		tomorrow.month = today.month+1;
		tomorrow.year = today.year;
	}
	
	printf("Tomorrow's date is %i-%i-%i.\n",
		tomorrow.year, tomorrow.month, tomorrow.day);
		
	return 0;
}

int numberOfDays(struct date d)
{
	int days;
	
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  //一年中每个月有多少天
	
	if ( d.month ==2 && isLeap(d) ) //如果这个月为2月，并且这一年为闰年时
		days = 29;
	else
		days = daysPerMonth[d.month-1];
		
	return days;	
}

bool isLeap(struct date d)
{
	bool leap = false;
	
	if ( (d.year%4 ==0 && d.year%100 !=0 ) || d.year%400 ==0 )
		leap = true;
		
	return leap;
}