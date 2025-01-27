#include<stdio.h>
void main(){
	int i=1,num,fact=1;
	printf("enter the numbers");
	scanf("%d",&num);
	while(i<=num){
		fact*=i;
		printf("%d\n",i);
		i++;
	}
	printf("\n sum =%d",fact);
}
