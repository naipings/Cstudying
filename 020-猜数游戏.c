#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数。");
	
	do {
		printf("请猜这个1到100之间的数：");
		scanf("%d", &a);
		count++;
		
		if (a > number ) {
			printf("你猜的数大了。 ");
		}	else if (a < number ) {
			printf("你猜的数小了。 ");
		}			
	} while (a != number);
	
	printf("太好了，你用了%d次就猜到了答案。\n", count);
	
	return 0;
}

//技巧：使用do-while循环 （因为无论怎样，都需要用户输入数字后，先执行一次里面的内容，再判断是否符合要求）
//现在留一个秘密：对于100以内的数来猜的话，在正确的猜法之下，最多7次就能猜出来。