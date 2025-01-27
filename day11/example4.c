#include<stdio.h>
struct student {
	char name[20];
	char phonenumber[11];
};
void main(){
	int i;
	struct student s[3];
	printf("enter student info");
	for(i=0;i<3;i++){
		printf("enter name");
		scanf("%s",s[i].name);
		printf("enter phonenumber");
		scanf("%s",s[i].phonenumber);	
	}
	printf("display the student info whose mobile no.last digit 88");
	for(i=0;i<3;i++){
		int len=strlen(s[i].phonenumber);
		if(s[i].phonenumber[len-1] =='8'&& s[i].phonenumber[len-2]=='8')
		{
			printf("%s\t",s[i].name);
			printf("%s\t",s[i].phonenumber);
		}
		printf("\n");
	}
}
