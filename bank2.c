#include<stdio.h>


int balance =10000;
char name [100];
int accountNo;
int amt;
int tAf;
int totalamt=0;
int depo;

void createAccount(){
	
	printf("\n1.enter the account holder name");
	scanf("%s",name);
	printf("\n2.enter the account No");
	scanf("%d",&accountNo);
	

}

void withdraw(){
printf("\n enter your ammount to withdraw\n");

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
	
	scanf("%d",&tAf);
	if(tAf<=balance){
		
		totalAmmount = balance-tAf;
		
		printf("\n your Total Balnce is:-%d",totalAmmount);
	
	}else {
		
		printf("\n  sorry you dont have sufficienrt balance To Transfer\n");
	}
	
balance=totalAmmount;
}



void deposit(){

printf("\n please enter your depositable amount \n");

printf(" \n ");

scanf("%d",&depo);
totalamt = totalamt + depo;
printf("\n your total amount with deposited %d:-\n", totalamt);	
balance =totalamt;
}





void dispalyAccount(){
	
		printf("\nAccount Holder name:%s",name);
	printf("\nAccount No:%d",accountNo);
	printf("\n overall Balance is:%d",balance);
	
}

int choicelist(){
	int choice;
	printf("\n .1 please create account");
	printf("\n .2 withdraw your money");
	printf("\n .3 deposit your money into the account");
	printf("\n .4 transfer money");
//	printf("\n .4 you may delete your account ");
    printf("\n .5 Display your account detail ");
    printf("\n .6  otherwise you may EXIT \n");
    scanf("%d",&choice);
    return choice;
	
}



void close(){
	
	exit(0);
}


int main(){
	
	while(1){
		int choice=choicelist();
		
	 switch(choice){
	 	case 1:
	 			createAccount();
	 			break;
	 			
	 	
	 	case 2:
	 			withdraw();
	 			break;
	 			
	 	 case 3:
	 	 		deposit();
	 	 	break;
	 	 	
	 	  case 4:
	 	  	transfer();
	 	  	break;
	 	  	
	 	  case 5:
	 	  	
	 		dispalyAccount();
	 		break;
	 	
	 	case 6:
	 		close();
	 		getch();
	 		break;
	 		
	 	
	 			default :
	 		    printf("\n Invalid value is being enterd by you Please Try Again");		
	 		
	   
	 }
		
	}
	
	
	return 0;
//	
//	createAccount();
//	withdraw();
//	transfer();
//	deposit();
//	dispalyAccount();
}
