#include<stdio.h>
void main(){
    int a;
    printf("Enter yor gas amount");
    scanf("%d",&a);
    if(a<=25){
        printf("the price is 4.89");
    }
    else if(a>=25 && a<50){
        printf("the price is 5.23");
    }
    else if(a>50 && a<65){
        printf("the price is 5.78");
    }
    else if(a>65 && a<90){
        printf("the price is 6.23");
    }
    else{
         printf("the price is 7");
    }


}