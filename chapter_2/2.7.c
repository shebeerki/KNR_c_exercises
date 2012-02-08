/* Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
 position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
 */

#include<stdio.h>
int invert(int, int, int);
main()
{
	int x,p,n,i;
	printf("enter values of x,p, n\n");
	scanf("%d %d %d",&x, &p, &n);
	i=invert(x,p,n);
	printf("the result is %d\n",i);
}
int invert(int x, int p, int n)
{
	return(x^((~(~0<<n))<<(p-n+1)));
}
