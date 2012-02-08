/* Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||. */

#include<stdio.h>
main()
{
	int lim=20,i=0;
	char c;
	while(i<lim-1){
		c=getchar();
		if(c!='\n')
			if(c!=EOF)
				printf("%c\n",c);
			else
				break;
		++i;
	}
}
