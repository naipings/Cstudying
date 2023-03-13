#include <stdio.h>

struct test1 {
	char a;
	int b;
	float c;
	double d;
	//unsigned int e;
	//unsigned long int f;
};

int main(int argc, char const *argv[])
{
	struct test1 Test1;
	char *p1 = &Test1.a;
	char *p2 = &Test1.b;
	char *p3 = &Test1.c;
	char *p4 = &Test1.d;
	
	printf("sizeof(Test1)=%lu\n", sizeof(Test1));
	printf("sizeof(Test1.a)=%lu\tsizeof(Test1.b)=%lu\tsizeof(Test1.c)=%lu\tsizeof(Test1.d)=%lu\t\n", 
		sizeof(Test1.a), sizeof(Test1.b), sizeof(Test1.c), sizeof(Test1.d));
		
	printf("Test1.a的地址:%p\tTest1.b的地址:%p\tTest1.c的地址:%p\tTest1.d的地址:%p\t\n", 
		p1, p2, p3, p4);
		
	
//	printf("sizeof(Test1.b)=%lu\tsizeof(Test1.c)=%lu\tsizeof(Test1.d)=%lu\t\n", 
//		sizeof(Test1.b), sizeof(Test1.c), sizeof(Test1.d));
//		
//	printf("Test1.b的地址:%p\tTest1.c的地址:%p\tTest1.d的地址:%p\t\n", 
//		p2, p3, p4);
		
		return 0;
	
}