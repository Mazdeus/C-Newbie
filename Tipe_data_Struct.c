//Contoh program menggunakan tipe data struct / record
#include<stdio.h>
struct Mahasiswa {
    char *name;
    char *address;
    int age;
};

void main(){
    //Menggunakan struct
    struct Mahasiswa mhs1,mhs2;

    //Mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;

    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    //Mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Name : %s\n",mhs1.name);
    printf("Alamat : %s\n",mhs1.address);
    printf("Umur : %d\n\n",mhs1.age);

    printf("## Mahasiswa 2 ##\n");
    printf("Name : %s\n",mhs2.name);
    printf("Alamat : %s\n",mhs2.address);
    printf("Umur : %d\n",mhs2.age);
}