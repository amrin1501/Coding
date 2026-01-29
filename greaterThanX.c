#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int x;
    printf("Enter the value of x : ");
    scanf("%d" , &x);
    printf("Enter the elements of the array : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > x) count++;
    }
    printf("The number of elements of the array that is greater than x is: %d" , count);
}