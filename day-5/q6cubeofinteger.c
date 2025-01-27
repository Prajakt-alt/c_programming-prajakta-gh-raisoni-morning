#include<stdio.h>
void main(){
	int i=1,cube=0,n;
	printf("enter the integer");
	scanf("%d",&n);
	while(i<=n){
		cube=i*i*i;
		printf("enter the cube%d\n",cube);
		i++;
	}
}
