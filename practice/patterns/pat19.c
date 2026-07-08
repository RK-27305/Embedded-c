#include<stdio.h>
int main()
{
	int n,rows,cols,spaces;
	printf("enter number: ");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++){
		for(cols=1;cols<=rows;cols++){
			if((cols+rows)%2==0){
				printf("1");}
			else{
				printf("0");}}
			printf("\n");}
		return 0;}
