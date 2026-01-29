#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int key;
    printf("Enter the value that you want to search: ");
    scanf("%d", &key);
    printf("Enter the element of the array : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == key){
            printf("Yes the number that you wanted to search is present.");
            return 0;
        }
    }
    printf("No the number that you wanted to search isn't present.");
    return 0;
}