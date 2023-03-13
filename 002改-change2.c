#include <stdio.h>

int main()
{
	//初始化
	int amount = 0;
	int price = 0;
	//读入金额和票面
	printf("请您输入金额：");
	scanf("%d", &price);	
	printf("请输入票面");
	scanf("%d", &amount);
	//计算找零
	if (amount >= price) {	
		int change = amount - price;
		printf("应该找您%d元。\n", change);
	}
	else {
		printf("对不起，您的金额不够");
	}
	return 0;
	
}