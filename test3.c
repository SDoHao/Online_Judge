#include<stdio.h>
int main()
{
	int i,n,min = 0,max = 0;
	scanf("%d",&n);
	int array[99];
	while(1)
	{
		for (i = 0;i < n;i++)
		scanf("%d",&array[i]);
	for (i = 0;i < n;i++)
	{
		printf("i = %d  array[i] = %d \n",i,array[i]);
		if(array[i] > array[max])
		{
			printf("    max = %d array[max] = %d\n",max,array[max]);
			max = i;
			printf("    max = %d\n",i);
		}
		if(array[i] < array[min])
		{
			printf("    min = %d array[min] =  %d\n",min,array[min]);
			min = i;
			printf("    min = %d\n",i);
		}
	}
	printf("max = %d min = %d\n",max,min);
	if(min==n-1&&max==0){
	    i=array[n-1];
	    array[n-1]=array[0];
  	    array[0]=i;
   }
   else
   {
	   	i=array[max];
		array[max]=array[n-1];
		array[n-1]=i;
		i=array[min];
		array[min]=array[0];
		array[0]=i;
   }

	for(i=0;i<n-1;i++)
		printf("%d ",array[i]);	  
	printf("%d\n",array[n-1]);	
	}
	
	return 0 ;
}

