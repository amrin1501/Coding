#include<stdio.h>
int main(){
    int bds[7] = { 20 , 13 , 63 , 15 , 19 , 71 , 1};
    int min = bds[0];
    for(int i = 0 ; i < 7 ; i++){ 
        if(min>bds[i]){ 
            min = bds[i]; 
        }
    }
    printf("The min number of the array is: %d",min);
    return 0;
}