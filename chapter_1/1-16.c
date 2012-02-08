
#include <stdio.h>
#define MAX 1000
void copy(char line[], char prev[]);
/* count lines in input */
main()
{
	char line[MAX]={0};
  	char prev[MAX]={0};
	int c,nc=0;
	int len =0;
	while((c=getchar())!=EOF){
		if(c!='\n'){
			line[nc]=c;
			++nc;
		}
		else{	
			line[nc]='\0';
			if(nc>=len){
				printf("%s\n",line);
				copy(line , prev);
			}
			else
				printf("%s\n",prev);
			for(len=0;prev[len]!='\0';++len)	
				;
			nc=0;
		}
	}
}
void copy(char line[],char prev[])
{ 
	int i=0;
	while((prev[i]=line[i])!='\0')
		++i;

}	
