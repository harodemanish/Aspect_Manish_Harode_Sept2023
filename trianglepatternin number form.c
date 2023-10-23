#include<stdio.h>
main(){
	int i,j;
	int k;
	for(i=0;i<=4;i++){
		  k=i;
		for(j=0;j<=7;j++)
		{
			if(j>=5-i && j<=3+i){
				printf("%d",k);
				j<4?k--:k++;
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
