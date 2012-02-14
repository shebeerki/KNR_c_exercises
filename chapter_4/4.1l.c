#include<stdio.h>
#include<string.h>
#define MAX 100
int strindex(char s[], char t[]);
main()
{
	int f;
	char s[MAX]={0};
	char t[MAX]={0};
	printf("enter string s[]\n");
	scanf("%s",s);
	printf("enter comparing string t[]\n");
	scanf("%s",t);
	f=strindex(s , t);
	printf("%d\n",f);
}
int strindex(char s[], char t[])
{
	int i=0,j;
	for(i=0;s[i]!='\0';++i){
		j=0;
		for(;t[j]==s[i] && t[j]!='\0';++j,++i)
			;
		if(t[j]=='\0'){
			return(i-j);
			break;
	
		}
	}
	return -1;
}
