/* Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in
 the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either
 case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange
 that a leading or trailing - is taken literally.
 */

#include<stdio.h>
#define MAX1 100
#define MAX2 1000
void expand(char s1[], char s2[]);
main()
{
	char s1[MAX1]={0};
	char s2[MAX2]={0};
	printf("enter s1 to expand a shorthand:\n");
	scanf("%s",s1);
	expand(s1,s2);
}
void expand(char s1[], char s2[])
{
	char c;
	int i, j;
	i=j=0;
	while((c=s1[i++])!='\0'){
		if(s1[i]=='-' && s1[i+1]>=c ){
			++i;
			while(c<s1[i] )
				s2[j++]=c++;
		}
		else
			s2[j++]=c;
	}
	s2[j]='\0';
	printf("string s1 is %s\n",s1);
	printf("string s2 is %s\n",s2);
}



			
			
		
