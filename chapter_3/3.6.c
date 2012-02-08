/*  Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third
 argument is a minimum field width; the converted number must be padded with blanks on the
 left if necessary to make it wide enough.
 */

#include<stdio.h>
#include<string.h>
#define MAX 100
#define abs(n) ((n) < 0 ? -(n):(n))
void itoa(int n, char s[],int f);
void reverse(char s[]);
main()
{
	char s[MAX]={0};
	int n,f;
	printf("enter an integer :\t");
	scanf("%d %d",&n,&f);
	itoa(n,s,f);
}
/* converts a integer to its character form */
void itoa(int n, char s[],int f)
{
	int i=0, sign;
	sign = n;
	do{
	
		s[i++]=abs(n%10)+'0';
		n/=10;
	}while(n!=0);
	if(sign<0)
		s[i++]='-';
	s[i]='\0';
	for(;strlen(s)<f;++i)
		s[i]=' ';
	s[i]='\0';
	reverse(s);
	printf("the charcter form of integer is %s and length is %d\n",s,strlen(s));
}
/* reverse a string */
	
void reverse(char s[])
{
	int i,n;
	char c;
	n=strlen(s);
	for(i=0;i<n;++i)
		c=s[i],s[i]=s[--n],s[n]=c;
	printf("%s\n",s);
}	

