#include<stdio.h>
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    (num%2==0) ? printf("%d is an even number", num)
               : printf("%d is an odd number", num)
}           
            