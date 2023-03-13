//利用字符串数组
#include <stdio.h>

int main(void)
{
	char *month[16] = {  //如果是char *month[]就无效？  并且注意[]里面的数字要能把这些单词都包含进去
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December",
	};
	
	int MonthNumber = 0;
	printf("请输入月份：");
	scanf("%d", &MonthNumber);	
	printf("%s\n", month[MonthNumber-1]);
	
	return 0;
}


//利用switch-case语句
//#include <stdio.h>
//
//int main(void)
//{
//	int MonthNumber;
//	scanf("%d",&MonthNumber);
//	switch (MonthNumber) {
//		case 1:printf("January\n"); break;
//		case 2:printf("Februrary\n"); break;
//		case 3:printf("March\n"); break;
//		case 4:prinf("April\n"); break;
//		case 5:printf("May\n"); break;
//		csae 6:prinf("June\n"); break;
//		case 7:printf("July\n"); break;
//		case 8:printf("August\n"); break;
//		case 9:printf("September\n"); break;
//		case 10:printf("October\n"); break;
//		case 11:printf("November\n"); break;
//		case 12:printf("December\n"); break;
//	}
//
//	return 0;
//}
