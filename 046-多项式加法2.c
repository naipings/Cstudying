#include<stdio.h>

int main(){
	int a,b;
	int number[101]={0}; 
	int i=0;
	
	for(i=0;i<2;i++) 
	{
		do{
			scanf("%d %d",&a,&b); 
			number[a]+=b;        //number[a]=number[a]+b; 
		}while(a);         
	}
	
	
	int c=1;
	for(i=101-1;i>=2;i--)
	{
		if(c) 
		{
			if(number[i]==1) 
			{
				printf("x%d",i);
				c=0;
			}else if(number[i]==-1)
			{
				printf("-x%d",i);
				c=0;
			}
			else if(number[i]!=0)
			{                               
				printf("%dx%d",number[i],i); 
				c=0;  
			}
		}else
		{
			if(number[i]==1)
			{
				printf("+x%d",i);
			}else if(number[i]==-1)
			{
				printf("-x%d",i);
			}else if(number[i]>0)
			{
				printf("+%dx%d",number[i],i);
			}else if(number[i]<0)
			{
				printf("%dx%d",number[i],i);
			}
		}
	}
	if(c==1)
	{
		if(number[1]==1)
		{
			printf("x");
			c=0;
		}else if(number[1]==-1)
		{
			printf("-x"); 
		} else if(number[1]!=0)
		{
			printf("%dx",number[1]);
			c=0;
		}
	}
	else 
	{
		if(number[1]==1) 
		{
			printf("+x");
		}else if(number[1]==-1)
		{
			printf("-x"); 
		} 
		else if(number[1]>0)
		{
			printf("+%dx",number[1]);
		}else if(number[1]<0)
		{
			printf("%dx",number[1]);
		}
	}
	if( c==1 && number[1] == 0)
	{
		printf("%d",number[0]);
	}else
	{
		if(number[0]>0)
		{
			printf("+%d",number[0]);
		}else if(number[0]<0)
		{
			printf("%d",number[0]);
		}
	} 
	
	printf("\n");
	return 0;
}
