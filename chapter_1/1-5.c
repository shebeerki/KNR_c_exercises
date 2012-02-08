/* 1-5. Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.
*/
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
 int c,f;
 printf("Temperature Conversion\n\n");
 printf("Fahrenheit Celsius\n");
 for(f=UPPER;f>=LOWER;f=f-STEP)
 {
  printf("%8d%8.1f\n",f,5*(f-32)/9.0);
 }

}
