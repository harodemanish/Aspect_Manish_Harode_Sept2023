#include<stdio.h>
main(){

int i,j,temp;
int a[n];
printf("enter the size of array");
scanf("%",&n);

printf("enter the elements of the array is ");

for(i =0; i<=n-1;i++){
	
	scanf("%d",&a[i]);
	
}	

for(i=0;i<=n-1;i++){
	
	for(j=0;j<=n-1;j++){
		if(a[j]>=a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}



for(i=0;i<n-1;i++){
	printf("%d",a[i]);
}
}
