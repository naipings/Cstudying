#include <stdio.h>

int main()
{
	const int NUM = 200;
	int cet[200];
	int a, b;
	int cnt=0;
	int cmp=1;	
	int i = 0;
	int j = 0;
	
	
	printf("请输入a,b：");
	scanf("%d/%d", &a, &b);
	
	while ( a >= b || a<10 || b>=100 ) {
		printf("请重新输入a,b：");
		scanf("%d/%d", &a, &b);
	}
	

	if ( a>=10 && a<b && b<100 ) {
		
		for( i=0; i<NUM; i++ ) {
        	cet[i]=0;
    	}                       //初始化数组
    
		for ( i=0; i<NUM; i++ ) {
			if ( cmp != 0 ) {
			cet[i] = a*10/b;
			cmp = a*10%b;
			a = cmp;
			cnt++; //为了不输出最后一位后面的0 
			} else {
				break;
			}								
		}
		
	printf("0.");	
	for ( j=0; j<cnt; j++ ) {   //为了不输出最后一位后面的0 
				printf("%d", cet[j]);
			}
	}
		
	return 0;
}
//算法本身没有问题，但是由于程序运行时，效率有些低（超出题目规定的时间限制和内存限制），所以没有通过。  
