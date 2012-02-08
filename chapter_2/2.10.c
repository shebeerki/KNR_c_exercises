/* Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case,
 with a conditional expression instead of if-else.
 */

#include<stdio.h>
#define MAX 20
void lower(char s[]);
main()
{
	char word[MAX]={0};
	scanf("%s",word);
	printf("the lower form of %s is",word);
	lower(word);
	printf(" %s\n",word);
}
void lower(char s[])
{
	s[0]=(s[0]>= 'A' &&  s[0]<= 'Z')?(s[0]+32):s[0];
}
