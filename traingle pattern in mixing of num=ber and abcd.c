#include<stdio.h>
main(){
	int i,j,k,num;
	char alpha;
	for(i=1;i<=4;i++){
		k=1;
		num=1;
		alpha='A';
		for(j=1;j<=7;j++){
			
			if(j>=5-i && j<=3+i){
				if(k)
					{
						if(i%2==1){
							printf("%d",num++);
							
						}else {
							printf("%c",alpha++);
						}
					}
				else 
					
					printf(" ");
					k=1-k;
				
				
			}else {
				
			printf(" ");	
			}
		}
		printf("\n");
	}
}
