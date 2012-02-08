
/* 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.*/


#include<stdio.h>
# define MAX 1000
void reverse(char line[]);
main()
{
	int c,nc=0,i=0;
	char line[MAX]={0};
	while((c=getchar())!=EOF){
 		if(c!='\n'){	
			line[nc]=c;
			++nc;
		}
		else{
		 	line[nc]=c;
			++nc;
			line[nc]='\0';
			reverse(line);
			for(i=0;i<nc;++i)
				line[i]='\0';
			nc=0;
		}
	}

}
void reverse(char line[])
{
	char buf;
	int i,j;
	i=j=0;
	while(line[i]!='\0')
		++i;
	--i;
	if(line[i]=='\n')
		--i;
	while(j<i){
		buf=line[j];	
		line[j]=line[i];
		line[i]=buf;
		++j;
		--i;
	}
	printf("%s",line);
			
}



