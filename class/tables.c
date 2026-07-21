#include<stdio.h>
int main()
{
	double num,table;
	int i=1;
	printf("enter table number :");
	scanf("%lf",&table);
	while(i<=10){
		num=table*i;
		printf("%.0lfx%d=%.0lf\n",table,i,num);
	i++;
	}
	return 0;
}
