/*  Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.*/


#include<stdio.h>
float celsius(float );
main()
{
	float fahr;
	int step = 20;
	int upper = 300, lower = 0;
	printf("Temperature Conversion\n\n");
	printf("Fahrenhiet celsius\n");
	for(fahr = lower; fahr <= upper; fahr = fahr + step)
		printf("%8.1f %8.1f\n",fahr ,celsius(fahr));
}
	float celsius(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
	
}
