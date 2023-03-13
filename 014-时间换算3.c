#include <stdio.h>

int main()
{
	int BJT,UTC;
	
	printf("请输入北京时间：");
	scanf("%d",&BJT);
	
	int Bhour; //读取北京时间的小时数
	int Bminute; //读取北京时间的分钟数
	
	Bhour = BJT / 100; //计算北京时间的小时数
	Bminute = BJT % 100; //计算北京时间的分钟数
	
	int Uhour; //读入世界协调时的小时数
	int Uminute; //读入世界协调时的分钟数
	

	while (Bhour < 0 || Bhour > 23 || Bminute < 0 || Bminute > 59) {
		printf("对不起，你输入的北京时间无效，请重新输入：");
		scanf("%d",&BJT);
		Bhour = BJT / 100;
		Bminute = BJT % 100;
	}
		
	if (Bhour >= 8) {
		Uhour = Bhour - 8;
		//Uminute = Bminute;
		//UTC = Uhour * 100 + Uminute;
		//printf("%d\n",UTC);
	}
	else {
		Uhour = Bhour + 16; //Bhour + 24 - 8;
		//Uminute = Bminute;
		//UTC = Uhour * 100 + Uminute;
		//printf("%d\n",UTC);	
	}
	Uminute = Bminute;
	UTC = Uhour * 100 + Uminute;
	printf("%d\n",UTC);	
	
	
	return 0;
}

//自我感觉应该是5分，只是内存有点大