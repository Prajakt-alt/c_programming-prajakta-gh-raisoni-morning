#include<stdio.h>
struct books{
	char title[20];
	char author[20];
	int price;
};
void main(){
	int i ;
	struct books b[5];
	printf("enter books information");
	for(i=0;i<5;i++){
		printf("enter title");
		scanf("%s",b[i].title);
		printf("enter author");
		scanf("%s",b[i].author);
		printf("enter price");
		scanf("%d",&b[i].price);
	}
	printf("display books information");
	for(i=0;i<5;i++){
		printf("title:%s\n",b[i].title);
		printf("author:%s\n",b[i].author);
		printf("price:%d\n",b[i].price);
	}
	
}

