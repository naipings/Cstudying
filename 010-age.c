#include <stdio.h>

int main()
{
	const int MINOR = 35;
	int age = 0;

	printf("请输入您的年龄：");
	scanf("%d",&age);
	
	if (age < MINOR) {
		printf("你的年龄是%d岁。\n 年轻是美好的，年龄决定了你的精神世界，好好珍惜吧。",age);
	}
	else {
		printf("你的年龄是%d岁。\n 年龄决定了你的精神世界，好好珍惜吧。",age);
	}	
	
	return 0;
}