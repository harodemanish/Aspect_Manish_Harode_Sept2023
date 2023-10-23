#include<stdio.h>
int i,j,k=1,n;

main(){
	int i,j,n=11,m=0;
for(i=1;i<=21;i++){
	i<=n?m++:m--;
	for(j=1;j<=21;j++){
		
		if(j>=n+1-m && j<=n-1+m){
			
			printf(" %d",k);
		}else{
		printf(" ");	
		}
		
	}
}	
	
}
