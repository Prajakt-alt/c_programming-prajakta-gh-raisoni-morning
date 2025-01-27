//with argument with returntype
#include<stdio.h>
int add(int x,int y)
{
	int result;
	result=x+y;
	return result;
}
void main(){
	int a=2,b=3,r;
	r=add(a,b);
	printf("%d",r);
}

