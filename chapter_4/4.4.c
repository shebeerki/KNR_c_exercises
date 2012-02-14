/* Exercise 4-4. Add the commands to print the top elements of the stack without popping, to
 duplicate it, and to swap the top two elements. Add a command to clear the stack.
 */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAXOF   100
#define NUMBER  '0'
#define MAXVAL  100 
#define BUFSIZE 100


void ungetch(int);	
void push(double);
void clear(void);

int getop(char []);
int sp=0;
int getch(void);
int bufp=0;

double val[MAXVAL];
double pop(void);

char buf[BUFSIZE];
	

main()
{
    	int type;
    	double op1, op2;
    	char s[MAXOF];
	printf("enter the operands and then its operator\n");	
    	while((type=getop(s))!=EOF){
       		switch(type){
			case NUMBER:  	push(atof(s));
				break;
			case '+':     	push(pop() + pop());
			      	break;	 
			
			case '*':     	push(pop() * pop());
			      	break;	 
			case '-':     	op2=pop();
			      	push(pop()-op2);
			      	break;
			case '/':     	op2=pop();
				if (op2!=0.0)
				push(pop()/op2);
			      	else
					printf("Error! division by zero...\n");
		 	      	break;							
			case '%':     	op2=pop();
			      	if (op2!=0.0)
					push((int) pop() % (int)op2);
			      	else
				   	printf("Error! division by zero...\n");
		 	      	break;	
			case 't':  	op2=pop();
					printf("top element is %.4g\n",op2);
					push(op2);
					break;		
			case 'c':	clear();
					break;
			case 'd':	op2=pop();
					push(op2);
					push(op2);
					break;
			case 's':	op1=pop();
					op2=pop();
					push(op1);
					push(op2);
					break;
          		case '\n':    	printf("\t%.8g\n",pop());
          			    	printf("\t%.8g\n",pop());
					break;
			default:      	printf("Error! undefined command....%s\n",s);
			      		break;
	     
		}
	}			
	return 0;
}


void push(double f)
{
     	if (sp < MAXVAL)
		val[sp++]=f;
     	else
	 	printf("error!  stack full, can't push.....%g\n",f);	
}


double pop(void)
{
     	if (sp > 0)
		return val[--sp];
     	else{
	    	printf("Error! stack empty.....\n");
	    	return 0.0;	 
	}		 
}


int getop(char s[])
{
     	int i,c;
     	while((s[0]=c=getch())==' ' || c=='\t')	
		;
     	s[1]='\0';
     	i=0;
     	if (!isdigit(c) && c !='.' && c!='-')
	  	return c;
     
     	if (c=='-')
         	if (isdigit(c=getch()) || c=='.')
			s[++i]=c;
	else{
		if (c!=EOF) 
		  ungetch(c);
		return '-';
	}
     	if (isdigit(c))
		while(isdigit(s[++i]=c=getch()))
	     		;
     	if (c=='.')
        	while(isdigit(s[++i]=c=getch()))	 		 
	     		;
     	s[i]='\0';
     	if (c!=EOF)
		ungetch(c);
     	return NUMBER;	
      	 
}


int getch(void)
{
    	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    	if (bufp >=BUFSIZE)
       		printf("ungetch too many characters\n");
    	else
       		buf[bufp++]=c;
}
void clear(void)
{
	sp=0;
}






