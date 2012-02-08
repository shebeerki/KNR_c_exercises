/* 1-8. Write a program to count blanks, tabs, and newlines. */

#include<stdio.h>
main()
{
	int c, nl = 0, nt = 0, nb = 0;
	while((c = getchar()) != EOF){
		if(c == ' ')
			++nb;
		if(c == '\t')
			++nt;
		if(c == '\n')
			++nl;
	}
	printf("count of blanks is %d, tabs is %d, newlines is %d\n",nb,nt,nl);
}
