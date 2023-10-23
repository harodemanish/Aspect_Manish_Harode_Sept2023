#include<stdio.h>


int balance =10000;

int  createAccount(){
	int accountid =0;
	int accountNo;
	int result;
    char name[100];
	int ages; 
	printf("\nplease enter  your name:-");
	scanf("%s",name);
	
	printf("\nplease enter your age ");
	scanf("%d",&ages);
	
	printf("\nplease enter your account Number:-");
	scanf("%d",&accountNo);
	
	printf("\n You have account balance is : %d \n",balance);
	
	result = deleteAccount(name,accountNo);
	
	if(result==1){
		printf("\nDeleted account successfully \n");
	}else {
		printf("\nyour account has been created\n ");
	}
	
	withdraw();
	transfer();
//	deposit();
	
}

int  deleteAccount(char nama[] ,int acc ){
	 
	int taccount= 1234;
	char tnam[] ={"manish harode"};
	
	if(strcmp(nama,tnam)==0 && strcmp(acc,taccount)==0){
		
		return  1;
		
	}else {
		
		return 0;
	}

	
}


void withdraw(){
printf("\n enter your ammount to withdraw\n");
int amt;
scanf("%d",&amt);

if(amt<=balance){
	balance = balance-amt;
}else {
	printf("\nsorry you dont have suffiecent balance \n ");
}
	
printf("your remaining balance is :- %d \n",balance);	
}


void  transfer(){
	int totalAmmount= balance;
	printf("\n please enter your transferable amount\n");
	int tAf;
	scanf("%d",&tAf);
	if(tAf<=balance){
		
		totalAmmount = balance-tAf;
		
		printf("\n your Total Balnce is:-%d",totalAmmount);
	
	}else {
		
		printf("\n  sorry you dont have sufficienrt balance To Transfer\n");
	}
	
	deposit(totalAmmount);
}
 
 

void deposit(int totalamt){

printf("\n please enter your depositable amount \n");

printf(" \n ");
int depo;
scanf("%d",&depo);
totalamt = totalamt + depo;
printf("\n your total amount with deposited %d:-\n", totalamt);	

}


int choicelist(){
	int choice;
	printf("\n .1 please create account");
	printf("\n .2 withdraw your money");
	printf("\n .3 deposit your money into the account");
	printf("\n .3 transfer money");
	printf("\n .4 you may delete your account ");
    printf("\n .5  dispaly your account detail ");
    
    scanf("%d",choice);
    return choice;
	
}


void close(){
	exit(0);
}

int main()	{
//createAccount();

int choice=choicelist();

if(choice==1){
	printf("please create a Account");
	createAccount();
	
}else if(choice==2){
	
printf("please withdrwa money ");
}else {
	printf("sorry you dont have account any account ");
}



//while(1){
// 
// choice =choicelist();
// 
//  switch(choice) {
//  	case 1:
//  		    createAccount();
//  		
//  	 break;
//  	
////  	case 2:
////  		     withdraw();
////  	break;                                       
////  		
////  	 case 3:
////  	 	              
////  	  deposit();
////  	 	
////  	 break;
////  	 
////  	 case 3:
////  	 	transfer();
////  	 	
////  	 	break;
//  	 	
//  	 	case 4:
//  	 	close();
//  	 	
//  	 	default :
//  	 		printf("\n  invalide value is enterd  please Try again");
//  	 		
//  		
//  }	
//	
//	
//}


return 0;	
}
