#include <stdio.h>

int main()
{
	printf("请分别输入身高的英尺和英寸，"
	"如输入\"5 7\"表示5英尺7英寸：");
	
	float foot;
	float inch;
	
	scanf("%f %f",&foot,&inch);//单精度浮点数的输入用%f就可以了
	
	float height;
	height = (foot + inch / 12) * 0.3048;
	
	printf("身高是%f米。\n",height);//单双精度浮点数的输出都用%f就可以了
	return 0;
	
}