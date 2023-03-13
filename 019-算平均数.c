#include <stdio.h>

int main()
{
	int number;
	int sum = 0;
	int count = 0;
	
	/*
	do {	
		scanf("%d",&number);
		if (number != -1) {
			sum += number;
			count++;
		}
	} while (number != -1 );	
	//这种代码的缺点是 每一轮要做两次if的判断
	*/

	
	scanf("%d",&number);
	while (number != -1) {
		sum += number;
		count++;
		scanf("%d",&number);
	}
	//这种代码可以省略一次if的判断
	
	

	printf("%f\n",1.0*sum/count);	
	
	return 0;
	
}
