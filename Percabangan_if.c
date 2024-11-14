//Percabangan if
#include<stdio.h>
int main(){
    printf("=== Program Memilih Angka untuk dapat Hadiah ===\n");
    int angka = 0;

    //User mengimputkan angka 1 - 10
    printf("Inputkan angka 1 - 10 : ");
    scanf("%i",&angka);

    //Menggunakan blok percabangan if
    if(angka == 4){
        printf("Selamat, Anda mendapatkan hadiah!\n");
    }

    printf("Terimakasih telah mencoba\n");
    
    return 0;
}