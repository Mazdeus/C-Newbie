//Struct bersarang
#include <stdio.h>

// Struktur utama
struct Mahasiswa {
    char nama[50];
    int umur;

    // Struktur bersarang
    struct Alamat {
        char jalan[50];
        char kota[30];
        int kode_pos;
    } alamat ;
} ;

int main() {
    // Mendeklarasikan dan menginisialisasi variabel struct
    struct Mahasiswa mhs1 = {
        "John Doe",
        20,
        {"123 Main St", "Cityville", 12345}
    };

    struct Mahasiswa mhs2 = {
        "Amadeus Andika",
        18,
        {"Arwana 3", "Bogor", 318640}
    };

    // Mengakses dan menampilkan informasi
    printf("Nama: %s\n", mhs1.nama);
    printf("Umur: %d\n", mhs1.umur);
    printf("Alamat: %s, %s, %d\n", mhs1.alamat.jalan, mhs1.alamat.kota, mhs1.alamat.kode_pos);

    printf("Nama: %s\n", mhs2.nama);
    printf("Umur: %d\n", mhs2.umur);
    printf("Alamat: %s, %s, %d\n", mhs2.alamat.jalan, mhs2.alamat.kota, mhs2.alamat.kode_pos);
    return 0;
}
