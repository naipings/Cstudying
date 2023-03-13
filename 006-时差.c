#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;
	scanf("%d %d",&hour1, &minute1);
	scanf("%d %d",&hour2, &minute2);  
                
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	
	if (im < 0) {
		im = im + 60;
		ih --;
	}
	
	printf("时差为：%d小时%d分钟",ih, im);
	return 0;	
}




/*这是本人第一次错误想法：
int x, y ,z;   
x = hour2 * 60 + minute2 - (hour1 * 60 + minute1);    
y = x / 60;
z = x % 60;
if (z < 0 ) {
z = 60 + z;
y --;
}
printf("时间差为：%d小时%d分钟",y, z);
*/