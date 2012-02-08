/*  1-12. Write a program that prints its input one word per line.*/

#include<stdio.h>
main()
{
	int c, prev;
	while((c = getchar()) != EOF){
		if((c !=' ') && (c != '\t') && (c != '\n')){
			printf("%c",c);
			prev =0;
		}
		else if(c != prev){
			printf("\n");
			prev = c;
		}
	}
}
