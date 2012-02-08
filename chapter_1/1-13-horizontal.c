/*  1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/

#include<stdio.h>
#define MAXW 20
#define MAXH 30
int maxm(int hist[]);
main()
{
	int c , max ,nc = 0,i,h;
	int hist[MAXW] = {0};
	while((c=getchar())!= EOF){
		if((c!='\n')&&(c!=' ')&&(c!='\t'))
			++nc;
		else{
			if (nc!=0)
				++hist[nc];
			nc=0;
		}
	}
	max=maxm(hist);
	for(i=0;i<MAXW;++i){
		printf("%d\t",i);
		hist[i]=((hist[i])*MAXH)/max;
		for(h=0;h<hist[i];++h)
			printf(" X ");
		printf("\n");
	}
}
	
int maxm(int hist[] )
{
	int max=0,i;
	for(i=0;i<MAXW;++i)
		if(hist[i]>=max)
			max=hist[i];
	return(max);
}
