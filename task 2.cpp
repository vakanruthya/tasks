#include<stdio.h>
main()
{
	float c=0,f=0;
	printf("enter temperature in celcius: ");
	scanf("%f",&c);
	f=9*(c+32)/5;
	printf("temperature in fahrenheit is: %f",f);
}
