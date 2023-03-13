#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct date {
		int month;
		int day;
		int year;
	};					//初学者最常见的错误：漏了这个分号
	
	struct date today;
	
	today.month = 07;
	today.day = 31;
	today.year = 2014;
	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
		
	return 0;
}

/*
在函数内/外？
和本地变量一样，在函数内部声明的结构类型只能在函数内部使用
所以通常在函数外部声明结构类型，这样就可以被多个函数所使用了
*/
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	struct date today;
	
	today.month = 07;
	today.day = 31;
	today.year = 2014;
	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
		
	return 0;
}

/*
声明结构的形式1：
struct point {
	int x;
	int y;
};
struct point p1,p2;
p1.x = ···;
p1.y = ···;
p2.x = ···;
p2.y = ···;
p1和p2都是point里面有x和y的值


声明结构的形式2：
struct {
	int x;
	int y;
} p1,p2;
p1和p2都是一种无名结构，里面有x和y


struct point {
	int x;
	int y;
} p1,p2;
p1和p2都是point里面有x和y的值

对于第一和第三种形式，都声明了结构point。但是第二种形式没有声明point，只是定义了两个变量
*/


/*
结构的初始化：
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	struct date today = {07,31,2014};
	struct date thismonth = {.month=7, .year=2014};
	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	printf("Today's month is %i-%i-%i.\n",
		thismonth.year,thismonth.month,thismonth.day);
		
	return 0;
}
*/


/*
结构成员：
结构和数组有点像
数组用[]运算符和下标访问其成员
	a[0] = 10;
结构用.运算符和名字访问其成员
	today.day
	student.firstName
	p1.x
	p1.y
*/


/*
结构运算：
要访问整个结构，直接用结构变量的名字
对于整个结构，可以做赋值、取地址，也可以传递给函数参数
	p1 = (struct point){5,10};  //相当于p1.x = 5; p1.y = 10;
	p1 = p2;  //相当于p1.x = p2.x; p1.y = p2.y;
	数组无法做这两种运算
*/
/*
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	struct date today;
	
	today = (struct date){07,31,2014};
	
	struct date day;
	
	day = today;
	//day.year = 2015;  //证明day和today是两个完全不同的结构变量
	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	printf("The day's month is %i-%i-%i.\n",
		day.year,day.month,day.day);
		
	return 0;
}
*/


/*
结构指针：
和数组不同，结构变量的名字并不是结构变量的地址，必须使用&运算符
struct date *pDate = &today;
*/
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	struct date today;
	
	today = (struct date){07,31,2014};
	
	struct date day;
	
	struct date *pDate = &today;
	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	printf("The day's month is %i-%i-%i.\n",
		day.year,day.month,day.day);
	
	printf("address of today is %p\n", pDate);
		
	return 0;
}