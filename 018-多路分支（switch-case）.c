#include <stdio.h>

int main()
{
	int type;
	scanf("%d",&type);
	
	switch (type) {
	case 1:
		printf("你好\n");
		break;
	case 2:
		printf("早上好\n");
		break;
	case 3:
		printf("晚上好\n");
		break;
	case 4:
		printf("再见\n");
		break;
	default:
		printf("啊，什么啊？\n");			
		break;  
	}
	return 0;
}
