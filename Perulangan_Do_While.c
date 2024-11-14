#include<stdio.h>

void main(){
    char ulangi = 'y';
    int counter = 0;

    //perulangan while
    do {
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        //increment counter
        counter++;
    } while(ulangi == 'y');

    printf("\n\n-----------\n");
    printf("Perulangan selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n",counter);
}