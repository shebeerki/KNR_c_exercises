/* Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.)
 */
#include<stdio.h>
#define MAX 100
int squeeze(char s1[], char s2[]);
main()
{
	int c;
	char s1[MAX]={0};
	char s2[MAX]={0};
	printf(" enter the string s1 and s2: ");
	scanf("%s %s",s1,s2);
	c=squeeze(s1,s2);
	printf("the location of first match between s1 and s2 is %d\n",c);
}
int squeeze(char s1[],char s2[])
{
	int i,j,k=0;
	for(i=0;s1[i]!='\0';i++){
		for(j=0;s2[j]!='\0';j++)
			if(s1[i]==s2[j])
				return i ;
	}
	return -1 ;
}
		
