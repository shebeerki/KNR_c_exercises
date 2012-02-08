/*Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters. */


#include<stdio.h>
#define MAX 100
#define MAXS 200
#define NUM 50
void escape(char t[], char s[], int i);
main()
{
	char t[MAX]={0};
	char s[MAXS]={0};
	int i,j, c ,n=NUM;
	while(n--){
		printf("Enter a string\n");
		for(i=0;i<MAX-1 && (c=getchar())!=EOF;){
			t[i++]=c;
		}
		t[i]='\0';
		escape(t,s,i);
		for(j=0;j<i;++j){
			s[j]=t[j]='\0';
		}
		
	}
}
void escape(char t[], char s[], int nc)
{
	int i=0, j=0;
	while(i<=nc){
		switch(t[i]){
			case '\t':
				s[j++]='\\';
				s[j++]='t';
				break;
			case '\n':
				s[j++]='\\';
				s[j++]='n';
				break;
			default:
				s[j++]=t[i];
				break;
		}
		++i;
	}
	printf("%s\n %d\n",s,j);
}

