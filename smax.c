#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = { 20 , 13 , 63 , 15 , 19 , 71 , 1};
    int max = INT_MIN;
    int smax = INT_MIN;
    //for finding max elemnt
    for(int i = 0 ; i < 7 ; i++){ 
        if(max<arr[i]){  
            max = arr[i]; 
        }
    }
    printf("The max number of the array is: %d\n",max);
    //for finding second max element
    for(int i = 0 ; i < 7 ; i++){ 
        if(arr[i] != max && smax < arr[i]){
            smax = arr[i];   
        }
    }
    printf("The second max number of the array is: %d\n",smax);
    return 0;
}