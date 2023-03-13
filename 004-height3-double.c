#include <stdio.h>

int main()
{
	printf("请分别输入身高的英尺和英寸，"
	"如输入\"5 7\"表示5英尺7英寸：");
	
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch);//双精度浮点数的输入需要用%lf来读入
	
	double height;
	height = (foot + inch / 12) * 0.3048;
	
	printf("身高是%f米。\n",height); //输出的时候用%f就可以了
	return 0;
	
}