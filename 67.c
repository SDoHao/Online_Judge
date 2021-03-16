#include<stdio.h>
int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
    double k1,k2;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF)
	{
		
		k1=(y2-y1)/(x2-x1);
		k2=(y4-y3)/(x4-x3);
		if(x1!=x2&&x3!=x4)//两线都不竖直 
		{
			if(k1==k2)//斜率相等 
			  printf("No\n"); 
			else
			  printf("Yes\n");
		} 
		else if(x1==x2&&x3==x4) //两线都竖直 
		{
			
			if(x1==x3)
			 printf("Yes\n");
			else
			 printf("No\n");
		}
		else
		   printf("Yes\n");
	}
	return 0;
}
