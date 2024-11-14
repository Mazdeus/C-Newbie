//Operator penugasan (Assigment operator)
#include <stdio.h>
void main(){
    int a,b;

    //Pengisian nilai dengan operator =
    a = 10;
    b = 20;

    //Pengisian sekaligus penambahan
    a += b; //Artinya a = a + b 
    printf("Hasil a = a + b adalah : %d\n",a);
    
    //Pengisian sekaligus pengurangan
    a -= b; //Artinya a = a - b
    printf ("Hasil a = a - b adalah : %d\n",a);

    //Pengisian sekaligus perkalian
    a *= b; //Artinya a = a * b
    printf("Hasil a = a * b adalah : %d\n",a);

    //Pengisian sekaligus pembagian
    a /= b; //Artinya a = a / b
    printf("Hasil a = a / b adalah : %d\n",a);

    //Pengisian sekaligus sisa bagi
    a %= b; //Artinya a = a % b
    printf("Hasil a = a % b adalah : %d\n",a);
    
}