#include<stdio.h>
void series(int i)
	{
	if(i>10){
		return;
	}
	printf("%d",i);
	series(i+1);
}
void main(){
	int i=1;
	series(i);
}

