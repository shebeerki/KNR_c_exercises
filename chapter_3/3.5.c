/* Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
 character representation in the string s. In particular, itob(n,s,16) formats s as a
 hexadecimal integer in s.
 */

#include<stdio.h>
#include<string.h>
#define MAX 100
#define abs(n) ((n) < 0 ? -(n): (n))
void itoa(int n, char s[], int b) ;
void reverse(char s[]) ;
main()
{
	char s[MAX] = {0} ;
	int n, b;
	printf("enter an integer and base:\t");
	scanf("%d %d",&n, &b);
	itoa(n, s, b);
}
/* converts a integer to its character form */
void itoa(int n, char s[],int b)
{
	int i=0, sign, rem;
	sign = n;
	do{
		rem = abs(n % b);
		if(rem  > 9)
			s[i] = 'A' + rem - 10;
		else
			s[i] = rem +'0';
		++i ;
		n /= b ;
	}while ( n != 0 ) ;
	if ( sign < 0 )
		s[i++] = '-' ;
	s[i]='\0';
	reverse(s);
	printf("the charcter form of integer %d is %s and length is %d\n",n,s,strlen(s));
}
/* reverse a string */
	
void reverse(char s[])
{
	int i,n;
	char c;
	n = strlen(s);
	for(i = 0; i < n; ++i)
		c = s[i], s[i] = s[--n], s[n] = c;
}	

