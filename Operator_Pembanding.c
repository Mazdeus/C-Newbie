//Operator Perbandingan 
#include<stdio.h>
void main(){
    int a,b ;

    //Input nilai a
    printf("Masukkan nilai a = ");
    scanf("%i",&a);

    //input nilai b
    printf("Masukkan nilai b = ");
    scanf("%i",&b);

    //operator perbandingan
    printf("a < b = %d\n", a < b);
    printf("a > b = %d\n", a > b);
    printf("a <= b = %d\n", a <= b);
    printf("a >= b = %d\n", a >= b);
    printf("a != b = %d\n", a != b);
    printf("a == b = %d\n", a == b);
}