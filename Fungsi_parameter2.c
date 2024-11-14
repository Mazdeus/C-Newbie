//Fungsi dengan lebih dari satu parameter
#include<stdio.h>
void add(int a,int b){
    printf("%d + %d = %d\n",a,b,a + b);
}

void main(){
    add(2,5);
    add(7,9);
    add(-2,-100);
}