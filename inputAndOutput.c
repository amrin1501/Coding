#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the obtained marks by the students : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("The marks are : ");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
}