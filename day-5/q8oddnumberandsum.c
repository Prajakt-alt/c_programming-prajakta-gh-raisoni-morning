#include<stdio.h>
void main(){
	int i=1,num,sum=0;
	printf("enter the numbers");
	scanf("%d",&num);
	while(i<=num){
		if(i%2==0){
			printf("%d\n",i);
			sum=sum+i;	
		}
		i++;
	}
	printf("\n sum=%d",sum);
}
