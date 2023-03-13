#include <stdio.h>

int main()
{
	int n,i;
	i = 1;
	printf("输入一个正整数n，表示班级的人数：");
	scanf("%d",&n);
	while ( i <=n ) {
		printf("%d ",i);
		
		i = i + 2;		
	}
	return 0;
}