/* 1-17. Write a program to print all input lines that are longer than 80 characters.*/

#include<stdio.h>
# define MAX 500
# define LIM 80
int clear(char line[],int nc);
main()
{
	char line[MAX]={0} ;
	int c , nc=0,i;
	while((c = getchar()) != EOF){
		if(c != '\n'){
		 	line[nc] = c;
			++nc;		
		}
		
		else{
			if(nc>LIM){
			line[nc] = '\0';
			printf("length of line is %d\n",nc);
			for(i = 0;i<nc;++i)
				printf("%c" , line[i]);
			printf("\n");
			
			}
		
			else	
				printf("length of line is less than or equal to 80\n");
					
			nc=clear(line ,nc);
		}
	}
}

int clear(char line[],int nc)
{
	int i;
	for(i = 0;i<nc;++i)
		line[i]='\0';
	nc = 0;
	return nc ;
}	

