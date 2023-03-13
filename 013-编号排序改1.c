/*
#include <stdio.h>

int main()
{
	int n,i;	
	printf("输入一个正整数n，表示班级的人数：");
	scanf("%d",&n);
	if (n>0) {
		for ( int i=1; i<=n; i=i+2) {
			printf("%d ",i);
		}
	}
	else {
		printf("输入的数字无效");
	} 	
	
	return 0;	
}
*/

#include <stdio.h>

int main()
{
	int n,i;
	i = 1;
	printf("输入一个正整数n，表示班级的人数：");
	scanf("%d",&n);
	for (; i<=n-2; i=i+2) {
			printf("%d ",i);
	}

	printf("%d",i);	
	
	return 0;	
}

	