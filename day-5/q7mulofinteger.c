#include<stdio.h>
void main(){
	int i=1,mul,num;
	printf("enter the integer");
	scanf("%d",&num);
	while (i<=10){
		mul=num*i;
		printf("the multiplication of integer%d\n",mul);
		i++;
	}
}
