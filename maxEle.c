#include<stdio.h>
int main(){
    int bds[7] = { 20 , 13 , 63 , 15 , 19 , 71 , 1};
    int max = bds[0];
    for(int i = 0 ; i < 7 ; i++){ // i = 5
        if(max<bds[i]){ //63 < 71 
            max = bds[i]; // max = 71
        }
    }
    printf("The max number of the array is: %d",max);
    return 0;
}