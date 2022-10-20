#include<stdio.h>
int main(){
   
     int season; //1-spring 2-summer 3-monsoon 4-winter
     printf("enter season(1-4) \n");
     scanf("%d",&season);

     switch(season){

        case 1: printf("spring \n");
        break;

        case 2: printf("summer \n");
        break;

        case 3: printf("monsoon \n");
        break;
        
        case 4: printf("winter \n");
        break;

        default: printf("enter a valid number \n");
        
     }



}