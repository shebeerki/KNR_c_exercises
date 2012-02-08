/* Exercise 3-4. In a two's complement number representation, our version of itoa does not
 handle the largest negative number, that is, the value of n equal to -(2wordsize-1). Explain why
 not. Modify it to print that value correctly, regardless of the machine on which it runs.
 */

#include<stdio.h>
#include<string.h>
#define MAX 100
#define abs(n) ((n) < 0 ? -(n):(n))
void itoa(int n, char s[]);
void reverse(char s[]);
main()
{
	char s[MAX]={0};
	int n;
	printf("enter an integer :\t");
	scanf("%d",&n);
	itoa(n,s);
}
/* converts a integer to its character form */
void itoa(int n, char s[])
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
	reverse(s);
	printf("the string form of integer is %s\n",s);
}
/* reverse a string */
	
void reverse(char s[])
{
	int i,n;
	char c;
	n=strlen(s);
	for(i=0;i<n;++i)
		c=s[i],s[i]=s[--n],s[n]=c;
}	

