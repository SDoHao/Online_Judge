#include <stdio.h>
#include <string.h>
int main(){
	int t,i,j;
	scanf("%d",&t);
	getchar();
	char s[10000]; 
	while(t--){
	scanf("%s",s);
	getchar();
	int result=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='-'){
			int j=s[++i]-'0';
			while(i+1<strlen(s)&&s[i+1]!='+'&&s[i+1]!='-'){
				j=j*10+s[i+1]-'0';
				i++; 
			}
			result-=j;
		}else if(s[i]=='+'){
			j=s[++i]-'0';
			while(i+1<strlen(s)&&s[i+1]!='+'&&s[i+1]!='-'){
				j=j*10+s[i+1]-'0';
				i++;
			}
			result+=j;
		}else{
			j=s[i]-'0';
			while(i+1<strlen(s)&&s[i+1]!='+'&&s[i+1]!='-'){
				j=j*10+s[i+1]-'0';
				i++;
			}
			result=j;
		}
	}
	printf("%d\n",result);
	//我笑死了这代码运算结果那么多错的能过这是校赛
	} 
}
