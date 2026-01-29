#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the obtained marks by the students : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Here are the roll numbers of those students whose marks are less than 35: ");
    for(int i = 0 ; i < n ; i++){
        if(arr[i]<35) printf("%d ", i );
    }
}