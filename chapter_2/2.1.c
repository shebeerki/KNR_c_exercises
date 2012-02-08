/* Exercise 2-1. Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.*/
#include<stdio.h>
#include<limits.h>
main()
{
	printf("signed types\n\n");
	printf("signed char_min is\t: %d\n",SCHAR_MIN);
	printf("signed char_max is\t: %d\n",SCHAR_MAX);
	printf("signed int_min is\t: %d\n",INT_MIN);
	printf("signed int_max is\t: %d\n",INT_MAX);
	printf("signed long_min is\t: %d\n",LONG_MIN);
	printf("signed long_max is\t: %d\n",LONG_MAX);
	printf("signed short_min is\t: %d\n",SHRT_MIN);
	printf("signed short_max is\t: %d\n",SHRT_MAX);
	printf("\n");
	printf("unsigned types\n");
	printf("unsigned char_min is\t:0 or %d\n",SCHAR_MIN);
	printf("unsigned char_max is\t:%d or %d \n",UCHAR_MAX,SCHAR_MAX);
	printf("unsigned int_min is\t:0\n");
	printf("unsigned int_max is\t:%u\n",UINT_MAX);
	printf("unsigned long_min is\t:0\n");
	printf("unsigned long_max is\t:%u\n",ULONG_MAX);
	printf("unsigned short_min is\t:0\n");
	printf("unsigned short_max is\t:%d\n",USHRT_MAX);





}

