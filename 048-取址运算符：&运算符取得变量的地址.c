/*
#include <stdio.h>

int main()
{  
   	int i = 0;
   	printf("0x%x\n", &i); //本来想通过16进制输出i的地址，但是这种方法是错误的
   	printf("%p\n", &i); //用%p才是正确的操作，%p会输出变量i的地址，并且以16进制输出
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{  
   	int i = 0;
   	int p;
   	p = (int)&i; //强制类型转换
   	printf("0x%x\n", p); 
   	printf("%p\n", &i);
   	printf("%lu\n",sizeof(int));
   	printf("%lu\n",sizeof(&i));     //&的结果的sizeof
	return 0;
}
*/

/*
//变量的地址；相邻的变量的地址
#include <stdio.h>

int main()
{  
   	int i = 0;
   	int p;
   	printf("0x%x\n", &i); 
   	printf("%p\n", &p);
   
	return 0;
}
*/

/*
//数组的地址；数组单元的地址；相邻的数组单元的地址
#include <stdio.h>

int main()
{  
   	int a[10];
   	
   	//printf("%lu\n",sizeof(int));
   	printf("%p\n", &a); 
   	printf("%p\n", a);
   	printf("%p\n", &a[0]);
   	printf("%p\n", &a[1]);
   	//由此可知：相邻的数组单元之间的地址的差距永远是4
	return 0;
}
*/