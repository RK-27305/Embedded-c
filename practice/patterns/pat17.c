#include<stdio.h>
int main(){
	int spaces,n,rows,cols,n1=0,n2=1,sum=0;
	printf("enter a number");
	scanf("%d", &n);
	for(rows=0;rows<n;rows++)
	{ int num=1;
		for(spaces=1;spaces<=n-rows;spaces++){
			printf(" ");
		}
		for(cols=0;cols<=rows;cols++){
			
			printf("%d ",num);
			num=num*(rows-cols)/(cols+1);

		}
		printf("\n");
	}
	return 0;
}


