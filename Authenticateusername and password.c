#include<stdio.h>
#include<string.h>


 
 
 void login(){
 	int s;
 	int l=0;
char ch;
int i,j;
 	char u[10];
 	char p[10];
 	printf("please enter the username");
 	scanf("%s",u);
 	printf("please enter the password");
// 	scanf("%s",p);
//    
//	for(i=0;i<=100;i++){
//		ch=getch();     
//		if(ch==13)
//		break;
//		
//		p[i]=ch;
//		ch="*";
//		printf("%c",ch);
//	} 
//    p[i]='\0';
//    
//    printf("masked password is");
//    for(j=0;j<=i;j++)
//    	printf("%s",p[i]);
//	

while((i=getch())!=13){
	
	p[l]=i;
	printf("*");
	l++;
}
p[l] ='\0';


 s =validate(u,p);
 if(s==0){
 	printf("login succesful");
 }else {
 	printf("login unsuccesful");
 }
 	
 }
 

 
 
 
  int validate(char user[],char pass[])
{
	
	char tuser[] ={"manish"};
	char tpass[] ={"manish@123"};
	
	if(strcmp(user,tuser)==0 && strcmp(pass,tpass)==0){
		
		return 0;
	}else {
		
		return 1;
	}
	
}




void screen1(){
	int ch;
	while(1){
		printf("please enter 1 to login ");
		printf("please enter 2 to exit event");
		scanf("%d",&ch);
		
		if(ch==1){
			login();
		}else if(ch==2){
			exit(0);
		}else {
			printf("please try again");
		}
	}
	
} 


void main(){
	
screen1();
	
}




