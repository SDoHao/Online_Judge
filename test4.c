#include<stdio.h>
char * f(char * s)
{
	char *p,*h;
	h = s;
	while(*s != '\0')
		s++;
	p = s;
	while(p!= h)
	{
		p--;
		*s = *p;
		s++;
	}
	*s = '\0';
	return h;
}

int main()
{
	char str[80];
	//char *f(char * str);
	gets(str);
	puts(f(str));
	return 0;
 }
