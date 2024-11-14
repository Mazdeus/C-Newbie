#include <stdio.h>

int main(){
	printf("Hallo, ini adalah contoh output\n");
	printf("Nama gw %s\n","Deus");
	printf("Umur gw %i\n",10);
	printf("Nama temen gw %c\n",'C');
	
	printf("Hallo, ini adalah contoh tabel\t");
	printf("Ini contoh bel %i\a\n",10); //Mengeluarkan suara
	printf("Ini contoh ' %c\'\n",'C');
	
	printf("Hallo\b");
	printf("Ini adalah contoh backspace %d\b",100);
	printf("Ini contoh %c\n",'C');
	
    printf("Halo, dunia\b\n"); // Karakter '\b' akan menghapus karakter 'a'
    
    printf("Ini adalah contoh penggunaan \\r.\n");
    printf("Menggeser kursor ke awal baris.");
    printf(" Teks ini akan menggantikan teks sebelumnya.\r");
    printf("Teks ini akan menimpa teks sebelumnya.\n");
    
	return 0;
}



