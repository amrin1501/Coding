#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d" , &n);
    int product = 1;
    int arr[n];
    printf("Enter numbers : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of the array is : ");
    for(int i = 0 ; i < n ; i++){
        product =  product * arr[i];
    }
    printf("%d" , product);
    return 0;
}