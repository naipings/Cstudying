#include<stdio.h>

int main()
{
	int n, i, j, m = 0, result = 0;
	scanf("%d", &n);
	int p[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (p[i][j] > p[i][m])
			{
				m = j;
			}
		}
		for (int a = 0; a < n; a++)
		{
			if (p[a][m] > p[i][m])
			{
				result += 1;
			}
			if (result == n - 1)
			{
				goto out;
			}
		}
	}
	out:if (result == n - 1)
	{
		printf("%d %d", i, m);
	} 
	else
	{
		printf("NO");
	}
	return 0;
}


