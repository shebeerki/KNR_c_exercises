/* 1-7. Write a program to print the value of EOF.  */

#include<stdio.h>
main()
{
	int c;
	while((c = getchar()) != EOF){
		;
	}
	printf("the value of EOF is %d\n",c);
}

