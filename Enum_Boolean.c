//Enum Boolean
#include<stdio.h>
enum boolean {false,true};

void main(){
    int a = 5;
    int b = 5;

    if (a < b == true ){
        printf("Variabel a lebih kecil dari b\n");
    } else {
        printf("Variabel a lebih besar dari b\n");
    }
}