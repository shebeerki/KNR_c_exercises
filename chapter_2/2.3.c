/* Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.
 */

#include<stdio.h>
#define MAX 10
#define YES 1
#define NO 0
int htoi(char s[]);
main()
{
	char s[MAX]={0};
	int j,k,var;
	for(k=0;(int)s != EOF;++k){
		 scanf("%s",s);
		 var=htoi(s);
		 printf("%d\n",var);
		 for(j=0;j<MAX;++j)
			s[j]='\0';
	}
}
int htoi(char s[])
{
	int i=0,n=0,hexdig,inhex;
	if(s[i]=='0')
		++i;
		if(s[i]=='x' || s[i]=='X')
			++i;
	
		
	inhex=YES;
	for(; inhex == YES;++i){
		if(s[i]>='0'&& s[i]<='9')
			hexdig=(s[i]-'0');
		else if(s[i]>='a'&& s[i]<='f')
			hexdig=(s[i]-'a'+10);
		else if(s[i]>='A'&& s[i]<='F')
			hexdig=(s[i]-'A'+10);
		else
			inhex = NO;
		if(inhex == YES || s[i]=='\n')
			n=16 * n + hexdig;
		}
	return n ;

		
}




