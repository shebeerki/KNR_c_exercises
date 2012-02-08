/* Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
 position p set to the rightmost n bits of y, leaving the other bits unchanged.
 */

#include<stdio.h>
int setbits(int ,int ,int ,int);
main()
{
	int i,x,p,y,n;
	printf("enter the values of x ,p ,y ,n\n");
	scanf("%d %d %d %d",&x,&p,&y,&n);
	i=setbits(x,p,y,n);
	printf("the result is %d\n",i);
}
int setbits(int x, int p, int y, int n)
{
	int b,c,d,f;
	b=~(~0 << n);
	return (x &(~(b<< (p-n+1))) | ((y & b)<<(p-n+1)));

}
