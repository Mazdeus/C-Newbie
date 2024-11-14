#include<stdio.h>
void main(){
    int a,b;

    printf("Masukkan Angka a : ");
    scanf("%i",&a);

    printf("Masukkan Angka b : ");
    scanf("%i",&b);

    printf("Hasil a + b : %i\n", a + b );
    printf("Hasil a - b : %i\n", a - b );
    printf("Hasil a * b : %i\n", a * b );
    printf("Hasil a / b : %f\n", (float) a / b );
    printf("Hasil a % b : %i\n", a % b );

}