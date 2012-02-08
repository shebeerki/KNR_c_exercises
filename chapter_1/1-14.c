/* 1-14. Write a program to print a histogram of the frequencies of different characters
in its input
  */

#include<stdio.h>
#define HIST 15
#define MAX 128
main()
{
	int c,i,h,arr[MAX]={0};
	while((c=getchar())!=EOF){
		if((c<MAX)&&(c!='\n'))
			++arr[c];
	}
	int max=0;
	for(i=0;i<MAX;++i)
		if(arr[i]>max)
			max=arr[i];
			
	for(i=0;i<MAX;++i)
		if(arr[i]){
			printf("%c\t",i);
			arr[i]=arr[i]*HIST/max;
			for(h=0;h<arr[i];++h)
				printf(" X ");
			printf("\n");
		}
	
}	
