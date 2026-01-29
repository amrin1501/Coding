#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of the array : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int sumOdd = 0;
    int sumEven = 0;
    for(int i = 0 ; i < n ; i++){
        if(i%2==0){ //even indices
            sumEven += arr[i];
        }
        else{
            sumOdd += arr[i];
        }
    }
    int final_result;
    final_result = sumEven - sumOdd;
    printf("The required result is %d", final_result);
    return 0;
}