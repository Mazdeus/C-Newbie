#include<stdio.h>
void main(){
    int nilai[5] = {10,11,12,13,14};

    int length = sizeof(nilai)/sizeof(*nilai);

    printf("Banyaknya isi array nilai =  %d\n",length);
}