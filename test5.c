#include<stdio.h>
//total = total * rate - 510
int main()
{
	double total,cash,rate = 1.007,temp;
	int month,i;
	scanf("%lf %d %lf",&total,&month,&cash);
	temp = total;
	while(1)
	{
		 total = temp;
		for(i = 0;i < month;i++)
		{
			total = total * rate - cash;
		}
		printf("lf",total);
		if (total < 0.1 && total > -0.1)
			break;
		else if (total > 0)
			rate -= 0.00001;
		else
			rate += 0.00001;
	}
	printf("%lf\n",rate);
	return 0;
}
 
