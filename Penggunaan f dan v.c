#include <stdio.h>

int main() {
    printf("Halaman 1\n");
    printf("Ini adalah konten di halaman 1.\f");
    printf("Halaman 2\n");
    printf("Ini adalah konten di halaman 2.\n");
    
    printf("Hello\v");
    printf("Tai\v");
    
  	printf("Laporan Penjualan\f");
  	printf("=================\f");
  	printf("Tanggal: 2023-11-10\f");
  	printf("-----------------\f");
  	printf("Produk | Harga | Kuantitas| Total\f");
  	printf("------ | ----- | -------- | -----\f");
  	printf("Buku   | 10.000| 10       | 100.000\f");
  	printf("Pensil | 5.000 | 20       | 100.000\f");
  	printf("Pulpen | 7.500 | 15       | 112.500\f");
  	printf("-----------------\f");
  	printf("Total  |       |          | 312.500\f");

    return 0;
}

