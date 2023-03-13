#include <stdio.h>

int main()
{
	int number;
	int odd_numbers = 0;
	int even_numbers = 0;
	
	scanf("%d",&number);
	while (number != -1) {
	
	if (number>0 && number<100000 && number%2==0) {
		even_numbers++;
	}
	else if (number>0 && number<100000 && number%2==1)
		 odd_numbers++;	
	scanf("%d",&number);
	}

	printf("%d %d",odd_numbers, even_numbers);

	return 0;

}
