#include<stdio.h>
 
int main()
{
	int n,i,j;
	int num[4]={0};
	scanf("%d", &n);
	while(n--)
	{
		for(i = 0; i < 4; i++)
			scanf("%d", &num[i]);
		for(i = 3; i > 0; i--)
			for(j = i-1; j >= 0; j--)
				if(num[i] == num[j])
				{
					num[i] += num[j];
					num[j] = 0;
				}
		for(i = 3; i > 0; i--)
			if(num[i] == 0)
				for(j = i-1; j >= 0; j--)
					if(num[j] != 0)
					{
						num[i] = num[j];
						num[j] = 0;
						break;
					}
		for(i = 0; i < 3; i++)
			printf("%d ", num[i]);
		printf("%d\n", num[3]);
	}
	return 0;
 } 
