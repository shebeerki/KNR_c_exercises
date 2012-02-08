/* 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include<stdio.h>
#include<ctype.h>
#define MAXW 15
#define MAXH 30
int maxm(int hist[]);
main()
{
	int c, max,nc = 0,i,h,ov=0;
	int hist[MAXW] = {0};
	while((c=getchar())!= EOF){
		if((c!='\n')&&(c!=' ')&&(c!='\t'))
			++nc;
		else{
			if (nc!=0)
				++hist[nc-1];
			if(nc>MAXW)
				++ov;
			nc=0;
		}
	}
	for(i=0;i<MAXW;++i)
                printf("%d---->%d ",i+1,hist[i]);
        printf("\n");

	printf("overflow is :%d \n",ov);
	max=maxm(hist);
	for(h = 0;h<MAXH;++h){
		for(i=0;i<=MAXW;++i){
			hist[i]=((hist[i])*MAXH)/max;
			if((hist[i])>=(MAXH-h))
				printf("X\t");
			else 
				printf(" \t");
		}
		printf("\n");
	}
	for(i=1;i<MAXW;++i)
		printf("%d\t",i);
	printf("\n");

		
	
}
	
maxm(int hist[] )
{
	int max=0,i;
	for(i=0;i<=MAXW;++i)
		if(hist[i]>=max)
			max=hist[i];
	return(max);
}
