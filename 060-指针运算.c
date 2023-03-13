#include <stdio.h>

int main(void)
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9,};
	char *p = ac;
	printf("p  =%p\n", p);
	printf("p+1=%p\n", p+1);  //char类型下，地址加一
	
	int ai[] = {0,1,2,3,4,5,6,7,8,9,};
	int *q = ai;
	printf("q  =%p\n", q);
	printf("q+1=%p\n", q+1);  //int类型下，地址加四了
	
//原因：sizeof(char)=1, sizeof(int)=4
//所以：当我们给一个指针去加一的时候，它不是在地址值上加一，而是在地址值上加一个sizeof那个指针所指的类型

	
	//以下为自我尝试的其他类型：
	double ad[] = {0,1,2,3,4,5,6,7,8,9,};
	double *r = ad;
	printf("r  =%p\n", r);
	printf("r+1=%p\n", r+1);
	
	float af[] = {0,1,2,3,4,5,6,7,8,9,};
	float *s = af;
	printf("s  =%p\n", s);
	printf("s+1=%p\n", s+1);
	
	long int ali[] = {0,1,2,3,4,5,6,7,8,9,};
	long int *t = ali;
	printf("t  =%p\n", t);
	printf("t+1=%p\n", t+1);
	
	short int asi[] = {0,1,2,3,4,5,6,7,8,9,};
	short int *u = asi;
	printf("u  =%p\n", u);
	printf("u+1=%p\n", u+1);
	
	unsigned int aui[] = {0,1,2,3,4,5,6,7,8,9,};
	unsigned int *v = aui;
	printf("v  =%p\n", v);
	printf("v+1=%p\n", v+1);
	
	long long int alli[] = {0,1,2,3,4,5,6,7,8,9,};
	long long int *w = alli;
	printf("w  =%p\n", w);
	printf("w+1=%p\n", w+1);

	return 0;
}