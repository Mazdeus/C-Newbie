#include <stdio.h>
#include <string.h>
int main(){
    //Membuat array character untuk menyimpan password
    char password[30];
    int password2;
    int correctpassword2 = 12345;

    printf("===Program Login===\n");
    printf("Massukkan password: ");
    scanf("%s", &password);

    //Percabangan if/else
    if( strcmp (password,"kucing") == 0 ){
        printf("Massukan password tambahan: ");
        scanf("%d", &password2);
        if (password2 == correctpassword2){
            printf("Selamat datang\n");
        }   else {
            printf("Password salah, silahkan coba lagi\n");
        }

    }   else {
        printf("Password salah, silahkan coba lagi\n");
    }
    printf("Terimakasih telah mencoba\n");

    return 0;
}