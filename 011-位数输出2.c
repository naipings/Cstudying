#include <stdio.h>

int main()
{
	int a,n;
	n=0;
	scanf("%d",&a);	
	n++;
	a /= 10;  //如果没有第8、9行，那么0这个数就不满足
	while (a> 0) {
		n++;
		a /= 10; //表示：a=a/10;		
	} 	
	printf("%d\n",n);			
	return 0;
}



/*a	n
10	0
1	1
0	2

5	0
0	1

0	0*/