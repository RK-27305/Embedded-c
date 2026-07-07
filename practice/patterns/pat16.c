#include<stdio.h>
int main(){
	int spaces,n,rows,cols,n1=0,n2=1,sum=0;
	printf("enter a number");
	scanf("%d", &n);
	for(rows=1;rows<=n;rows++)
	{
		for(spaces=1;spaces<=n-rows;spaces++){
			printf(" ");
		}
		for(cols=1;cols<=rows;cols++){
			
			printf("%d ",sum);
			n1=n2;
			n2=sum;
			sum=n1+n2;

		}
		printf("\n");
	}
	return 0;
}


