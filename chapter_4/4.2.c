/* Exercise 4-2. Extend atof to handle scientific notation of the form
    123.45e-6
 where a floating-point number may be followed by e or E and an optionally signed exponent.
 */

#include <ctype.h>
#include<stdio.h>
void atof(char s[]);
/* atof: convert string s to double */
void atof(char s[])
{
	double val, power,exp=0;
	int i, sign;
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
        	i++;
	for (val = 0.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] - '0');
		val*=sign ;
	}
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	val*=power;
	if(s[i]=='e' || s[i]=='E'){
		sign=(s[++i]=='-')?-1:1;
		if(sign==-1)
			++i;
		for(;isdigit(s[i]);++i){
			exp=exp *10+(s[i]-'0');
		}
		for(i=0;i<exp;++i){
			if(sign==-1)
				power/=10;
			else
				power*=10;
		}
	}


	printf("%f\n",val * power);
}

main()
{
	double r;
	char s[12]={0};
	scanf("%s",s);
	atof(s);
}

