#include <stdio.h>

void minmax(int a[], int len, int *min, int *max);

int main()
{
	int a[] = { 1, 2, 3, 4, 9, 10, 16, 17, 18, 25, 30, 40, 45, 56, 69, 74, 82, 96, 97, 98, 99, 100 };
	int min,max;
	
	//printf("main sizeof(a)=%lu\n", sizeof(a));
	////printf("main a=%p\n", a);
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	//////printf("a[0]=%d\n", a[0]);
	printf("min=%d, max=%d\n", min, max);
	
	return 0;
	
}

void minmax(int a[], int len, int *min, int *max)
{
	int i;
	//printf("minmax sizeof(a)=%lu\n", sizeof(a));
	////printf("minmax a=%p\n", a);
	//////a[0] = 1000;
	*min = *max = a[0];
	for ( i=1; i<len; i++ ) {
		if ( a[i] < *min ) {
			*min = a[i];
		}
		if ( a[i] > *max ) {
			*max = a[i];
		}
	}
	
}