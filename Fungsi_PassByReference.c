//Contoh Program Pass by reference
#include<stdio.h>
void kali_dua (int *num){
    *num = *num * 2;
}

void main(){
    int angka = 9;

    //Memanggil fungsi
    kali_dua (&angka);

    //Mencetak isi variabel setelah fungsi dipanggil
    printf("Isi variabel angka : %d\n",angka);
}