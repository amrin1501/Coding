#include<stdio.h>
int main(){
    int arr[5] = {1 , 2 , 5 , 10, 40};
    printf("%d " , arr[0]);
    printf("%d " , arr[1]);
    printf("%d " , arr[2]);
    printf("%d \n" , arr[3]);
    arr[2] = 200;
    printf("%d " , arr[0]);
    printf("%d " , arr[1]);
    printf("%d " , arr[2]);
    printf("%d " , arr[3]);
}