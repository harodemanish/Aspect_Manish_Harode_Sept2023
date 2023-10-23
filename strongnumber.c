#include<stdio.h>

main(){
	int i ,j,d ,num,r,sum=0;
	
	printf("enter the number");
	scanf("%d",&num);
	
	int orignal = num;
	
	while(num>0){
		
		d = num%10;
		
		for(i=1;i<=d;i++){
			
			
			r =r*i;
		}
		
		sum = sum +r;
		r=1;
		num =num/10;
	}
	
	if(orignal==sum){
		printf("number is strong number");
	}else {
		printf("number is not strong number");
	}
	
}
