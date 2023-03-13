#include <stdio.h>

int main()
{
	int BJT;
	int UTC;
	int  jet_lag = 800;		//时差八小时

	scanf("%d",&BJT);			//读入北京时间
	int Bhour = BJT / 100;			//读取北京时间的小时数
	int Bminute = BJT % 100;			//读取北京时间的分钟数
	
	//判断输入时间格式是否正确
	while (Bhour < 0 || Bhour>23 || Bminute < 0 || Bminute>59)
	{
		printf("输入时间格式错误，请重新输入：");
		scanf("%d",&BJT);
		Bhour = BJT / 100;
		Bminute = BJT % 100;
	}

	//定义时间协调时间的小时数和分钟数
	int Uhour = 0;
	int Uminute= Bminute;
	//UTC = Uhour * 100 + Uminute;		//世界协调时间计算公式
	
	//开始将北京时间转换成世界协调时间
	if (Bhour >= (jet_lag / 100))
	{
		Uhour = Bhour - (jet_lag / 100);
		UTC = BJT - jet_lag;
	}
	else
	{
		Uhour = 24 + Bhour - (jet_lag / 100);
		UTC = Uhour * 100 + Uminute;
	}
	//printf("%d %d\n", Uhour,Uminute);		//调试用
	printf("%d\n", UTC);		//输出世界协调时间

	return 0;
}

//最终得分为5分
//有时得分为0分