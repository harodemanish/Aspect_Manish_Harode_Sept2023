#include<stdio.h>
main(){
	
	int i,j,k=1,p;
	int flag;
	for(i=1;i<=5;i++){
		   flag=1;
		   p=k;
		for(j=1;j<=9;j++){
			
			if(i%2==1){
				k=k+1;
			}else{
				k--;
				k=k+i;
			}
			
			if(j<=2*i-1){
				
				if(flag==1)
				
					printf("%d",p);
					if(i%2==0){
					
						p++;k++;
					}
				else
						p--;
					
				
			}else 
			
					printf("*");
					flag=1-flag;
			
				
			}else{
				printf(" ");
			}
			
		}
		
			printf("\n");
	}

	
	
}
