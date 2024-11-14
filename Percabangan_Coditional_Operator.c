#include<stdio.h>
void main(){
    int jawaban;

    printf("Berapakah hasil 4 + 4 - 8?\n");
    printf("Jawab : ");
    scanf("%i",&jawaban);

    printf("Jawaban anda %s\n",(jawaban == 0) ? "Benar" : "Salah");
}