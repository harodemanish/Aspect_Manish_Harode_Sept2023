#include<stdio.h>
main(){
	int i,j;
	int m1[3][3];
	int m2[1][1];
	
	printf("enter the 1 st matrix");
	
	for(i=0;i<=3;i++){
		
		for(j=0;i<=3;j++){
			
			scanf("%d",&m1[i][j]);
			
			
		}
		
		}
		
		for(i=0;i<=3;i++){
			
			for(j=0;j<=3;j++){
				printf("%d ", m1[i][j]);
			}
			printf("\n");
		}
	return 0;
}
