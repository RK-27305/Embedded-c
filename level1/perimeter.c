#include<stdio.h>
int main()
{
	float l,b,perimeter;
	printf("enter length and breadth :");
	scanf("%f%f",&l,&b);
	perimeter=2*(l*b);
	printf("Perimeter = %.2f\n",perimeter);
	return 0;
}
