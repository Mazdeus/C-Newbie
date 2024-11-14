#include<stdio.h>
void main(){
    int nilai[5];
    int x = 1; 

    nilai[0] = 32;
    nilai[1] = 31;
    nilai[2] = 30;
    nilai[3] = 29;
    nilai[4] = 28;

    for(int i = 0 ; i < 5 ; i++){
        printf("Nilai ke-%d : %d\n",x,nilai[i]);
        x++;
    }
}