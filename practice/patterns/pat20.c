#include<stdio.h>
int main()
{
	int n,rows,cols,spaces;
	char ch;
	ch=65;
	printf("enter number: ");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++){
		for(spaces=1;spaces<=n-rows;spaces++){
			printf(" ");}
		ch=65;
		for(cols=1;cols<=2*rows-1;cols++){
			if((cols)%2==0){
				printf("*");}
			else{
				printf("%c",ch);
			ch++;
			}
		}
			printf("\n");}
		return 0;}
