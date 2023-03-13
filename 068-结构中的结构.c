/*
结构（类型）数组：
struct date dates[100];
struct date dates[] = {
	{4,5,2005},{2,4,2005}};
*/
//没有什么特别的地方，以前我们使用int float或者char类型的数组，现在我们也就是使用特殊类型的数组罢了
#include <stdio.h>

struct time {
	int hour;
	int minutes;
	int seconds;	
};

struct time timeUpdate(struct time now);

int main(void)
{
	struct time testTimes[5] = {
	{11,59,59}, {12,0,0}, {1,29,59}, {23,59,59}, {19,12,27}	
	};
	int i;
	
	for ( i=0; i<5; ++i ) {
		printf("Time is %.2i:%.2i:%.2i\n",
			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
			
		testTimes[i] = timeUpdate(testTimes[i]);
		
//		printf("...one second later it's %.2i:%.2i:%.2i\n",
//			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);   //只是课堂上面的代码，有点问题
	}
	
	return 0;
}

struct time timeUpdate(struct time now)
{
	++now.seconds;
	if ( now.seconds == 60 ) {
		now.seconds = 0;
		++now.minutes;
		
		if ( now.minutes == 60 ) {
			now.minutes = 0;
			++now.hour;
			
			if ( now.hour == 24 ) {
				now.hour = 0;
			}
		}
	}
	
	printf("...one second later it's %.2i:%.2i:%.2i\n",
		now.hour, now.minutes, now.seconds);                                //这是我修改的部分
}


/*
结构中的结构：
struct dateAndTime {
	struct date sdate;
	struct time stime;
};


举例：
嵌套的结构：
例如：我们想表示一个矩形，其实只需要知道这个矩形对角线上的两个点的坐标就行了。
struct point { //point代表一个点，其有x和y的坐标值
	int x;
	int y;
};
struct rectangle {  //rect代表一个矩形，用对角线上的两个点的坐标来表示
	struct point pt1;
	struct point pt2;
};

如果有变量
	struct rectangle r;
就可以有：
	r.pt1.x、 r.pt1.y，
	r.pt2.x、 r.pt2.y
	


如果有变量定义：
	struct rectangle r,*rp;
	rp = &r;
	
那么下面的四种形式是等价的：
	r.pt1.x
	rp->pt1.x
	(r.pt1).x
	(rp->pt1).x
但是没有rp->pt1->x（因为pt1不是指针）
*/