/* 1-18. Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.*/


#include<stdio.h>
# define MAX 1000
int getline(char line[],int lim);
int remove(char line[]);
main()
{	
	
	char line[MAX]={0};
	while(getline(line,MAX)>0)
		if((remove(line))>0)
			printf("%s",line);
	return 0 ;		
		
}

                                                
int getline(char line[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}


int remove(char line[])
{
	int i=0;
	while(line[i]!='\n')
		++i;
	--i;
	while((i>=0)&&((line[i]==' ')||(line[i]=='\t'))){
		line[i]='\0';
		--i;
	}
	if(i>=0){
		line[i]='\n';
		++i;	
		line[i]='\0';	
	}
	return i;
}
