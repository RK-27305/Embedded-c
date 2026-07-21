#include<stdio.h>
int main()
{
	float cel,fah;
	printf("enter temperature in celsius :");
	scanf("%f",&cel);
	fah=(cel*1.8)+32;
	printf("Fahrenheit %0.2f:",fah);
	return 0;
}
