//Operator penugasan untuk Biner
#include<stdio.h>
void main (){
    int a = 4;
    int b = 5;
    int c = 6;
    int d = 7;
    int e = 10;

    //Pengisian dan shift left
    a <<= 1; // (a = a << 1) Artinya dimana bahasa C akan menggeser posisi bit dalam variabel a ke kiri sebanyak 1 tempat.
    printf("Hasil a <<= 1 adalah : %d\n",a);

    //Pengisian dan shift right
    b >>= 1; //(b = b >> 1) Artinya dimana bahasa C akan menggeser posisi bit dalam variabel b ke kanan sebanyak 1 tempat.
    printf("Hasil b >>= 1 adalah : %d\n",b);

    //Pengisian dan bitwise AND
    c &= 1; //(c = c & 1) Artinya operatpr ini akan akan memproses bit per bit dari kedua variabel, jika kedua bit sama-sama 1, maka hasilnya juga 1, selain kondisi tersebut, nilai akhirnya adalah 0.
    printf("Hasil c &= 1 adalah : %d\n",c);

    //Pengisian dan bitwise OR
    d |= 6; //(d = d | 6) Artinya operator ini akan menghasilkan hasil akan bernilai 0 jika kedua bit bernilai 0, selain itu nilai bit akan di set menjadi 1.
    printf("Hasil d |= 6 adalah : %d\n",d);

    //Pengisian dan bitwise XOR
    e ^= 11; //(e = e ^ 11) Artinya operator ini hasilnya akan bernilai 1 jika salah satu dari kedua variabel bernilai 1 (namun tidak keduanya). Atau dengan kata lain jika kedua bit berlainan, hasilnya 1 tapi kalau sama-sama 0 atau sama-sama 1, hasilnya 0.
    printf("Hasil e ^= 11 adalah : %d\n",e);

}

