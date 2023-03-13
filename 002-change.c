#include <stdio.h>

int main()
{
	const int AMOUNT = 100;//const是一种修饰符。一旦初始化后，不能被修改。
	int price = 0;
	printf("请您输入金额：");
	scanf("%d", &price);
	
	int change = AMOUNT - price;
	printf("找您%d元。\n", change);
	
	return 0;
	
}