#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d" , &n);
    int sum = 0;
    int arr[n];
    printf("Enter numbers : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of the array is : ");
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    printf("%d" , sum);
    return 0;
}