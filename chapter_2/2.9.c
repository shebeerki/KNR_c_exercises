/*  Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
 in x. Explain why. Use this observation to write a faster version of bitcount.
 */

#include<stdio.h>
int bitcount(unsigned int);
main()
{
	int d,i;
	scanf("%d",&d);
	i=bitcount(d);
	printf("the number of ones in %d in binary form is %d\n",d,i);
}
int bitcount(unsigned int d)
{
	int b , h=01;
	for(b=0;d!=0;h <<= 01)
		if(d & h){
			++b;
			d &= (d-1);
		}
	return(b) ;
}

