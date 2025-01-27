#include<stdio.h>
void main()
{
	int i=1,n,sum=0,avg;
	while (i<=10)
	{
		printf("enter the number");
		scanf("%d",&n);
		sum=sum+n;
		avg=sum/10;
		i++;
	}
	printf("%d the sum is\n",sum);
	printf("%d the avg is\n",avg);
}
