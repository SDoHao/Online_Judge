#include<stdio.h>
int main()
{
   int n,i,j,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       int a[4];
       scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
       for(j=3;j>0;j--)
	   {
           for(k=j-1;k>=0;k--)
		   {
                if(a[j]==a[k])
				{
                     a[j]=a[j]*2;
                     a[k]=0;
                     break;
				}
		   }
	   }
       for(j=3;j>0;j--)
	   {
           if(a[j]==0)
		   {
                for(k=j-1;k>=0;k--)
				{
                     if(a[k]>0)
					 {
                        a[j]=a[k];
                        a[k]=0;
                        j--;
					 }
				}
		   }
	   }
       printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
   }
   return 0;
} 
