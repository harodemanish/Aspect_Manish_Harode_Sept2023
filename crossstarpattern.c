#include<stdio.h>
main(){
	
	int i,j,k;
   
   for(i=1;i<=7;i++){
   	
   	for(j=1;j<=7;j++){
   		
   		if(j==i || j==8-i){
   			
   			printf(" "); // fore printing space
		   }else{
		   	
		   	printf("*");
		   }
		  
	   }
	    printf("\n");
	   
   }
}
