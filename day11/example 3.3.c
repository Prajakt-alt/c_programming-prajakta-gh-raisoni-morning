//withought argument with returntype

#include<stdio.h>
int multiplication(){
	int a=2,b=3,result;
	result = a*b;
	return result;
}
void main(){
	int r;
	r=multiplication();
	printf("%d",r);
}

