#include<stdio.h>
void main(){
	int i=1,sum=0;
	printf("enter the natural number");
	scanf("%d",&i);
	while(i<=10)
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
}
