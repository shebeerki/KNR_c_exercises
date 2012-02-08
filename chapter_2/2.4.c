/*   Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
 s1 that matches any character in the string s2.
 */

#include<stdio.h>
#define MAX 100
void squeeze(char s1[], char s2[]);
main()
{
	char s1[MAX]={0};
	char s2[MAX]={0};
	printf(" enter the string s1 and s2: ");
	scanf("%s %s",s1,s2);
	squeeze(s1,s2);
}
void squeeze(char s1[],char s2[])
{
	int i,j,k=0,c=0;
	for(i=0;s1[i]!='\0';i++){
		for(j=0;s2[j]!='\0';j++)
			if(s1[i]==s2[j])
				c=1;
		if(!c)
			s1[k++]=s1[i];
		c=0;
		
	}
	s1[k]='\0';
	printf("the result is %s\n",s1);
}
		
