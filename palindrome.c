#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    if(num < 0 || (num % 10 == 0 && num != 0)) {
        printf("False.");
        return 0;
    }
    int reversed = 0;
    while(num > reversed){
        reversed = reversed * 10 + num % 10;
        num /= 10; //num = num / 10;
    }
    if ( num == reversed || num == reversed / 10) printf("True.");
    else printf("False.");
    return 0;
}