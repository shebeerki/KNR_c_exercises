/* Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at
 the price of more tests outside.) Write a version with only one test inside the loop and
 measure the difference in run-time.
 */
#include<stdio.h>
#include<string.h>
#define MAX 100
int binsearch(int x, int v[],int n);
main()
{
	int x,n,r;
	int v[MAX]={0};
	printf("enter int array v[], comparing value x \n ");
	scanf("%s  %d",v,&x);
	n=strlen(v);
	r=binsearch(x,v,n);
	printf("the index of match is %d\n",r);
}


int binsearch(int x, int v[],int n)
{
	int i=0,c=0;
	while (i<n) {
		if(x==v[i]){
			c=1;
			break;
		}
		
	 }
	if(c)
		return i;
	if(!c)
		return -1;   
}

