/*  1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
 */

#include<stdio.h>
main()
{
	int c;
	int chr_pre;
	while((c = getchar()) != EOF){
		if(c == ' ' && c == chr_pre)
			;
		else
			printf("%c",c);
		chr_pre = c;
	}
}
			
