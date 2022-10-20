#include<stdio.h>
int main(){
	int n;
	printf("enter number \n");
	scanf("%d",&n);
	

	
	//numbers in reverse order and their sum.
    int sum =0;
    for(int i=1,j=n;i<=n&&j>=1; i++,j--){
    	sum=sum + i;
        printf("%d \n",j);
    }
    
    printf("sum is %d \n",sum);
    
   




}