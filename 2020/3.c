#include<stdio.h>
//total = total * rate - 510
//2000 4 510 0.797%
//1000 4 255
//3000 4 760
int main()
{
	double total,cash,rate = 1.007,temp;
	int month,i,flag = 0;
	scanf("%lf %d %lf",&total,&month,&cash);
	temp = total;
	while(1)
	{
		if  (rate < 1 || rate > 2)
			break;
		total = temp;
		for(i = 0;i < month;i++)
		{
			total = total * rate - cash;
		}
//		if (total <1e -2 && total > -1e -2)
//			break;
//		else 
		if (total > 0)
			{
				if (flag < 0)
					break;
				else if (flag == 0)
					flag = 1;
				rate -= 0.000005;
			}
		else
		{	
			if (flag > 0)
				break;
			else if (flag == 0)
				flag = -1;
			rate += 0.000005;	
		}
	}
	printf("%.3lf%%\n",rate * 100 - 100);
	return 0;
}
