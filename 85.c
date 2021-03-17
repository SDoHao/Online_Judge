#include<stdio.h>
int main()
{
	int m,n,i,j,min_i,min;
	min_i = i = j = 0;
	scanf("%d%d",&m,&n);
	int array[m][n];
	while(scanf("%d",&array[i][j]))
	{
		if(array[i][min_i] > array[i][j])
			min_i = j;
		j++;
		if(j == n)
		{
			array[m][i] = min_i;
			i++;
			min_i = j = 0;
			if(i == m)
			{
				for(i = 0;i < m;i++)
				{
					min_i = array[m][i];
					min = array[i][min_i];
					for(j = 0;j < m;j++)
					{
						if (min < array[j][min_i])
							break;
					}
					if(j == m)
						printf("%d %d\n",i + 1,min_i + 1);	
				}
				break;
			}
		}
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int m,n,i,j,min,min_j;
//	min_j = i = j = 0;
//	scanf("%d%d",&m,&n);
//	int array[m][n];
//	for(i = 0;i < m;i++)
//		for(j = 0;j< m;j++)
//			scanf("%d",&array[i][j]);
//	for(i = 0;i < m;i++)
//	{
//		for(j = 0;j < n;j++)
//			if(array[i][min_j] > array[i][j])
//				min_j = j;
//		min = array[i][min_j];
//		for(j = 0;j < m;j++)
//			if(min < array[j][min_j])
//				break;
//		if(j == n)
//			printf("%d %d\n",i + 1,min_j + 1);
//	}
//	return 0;
//}
