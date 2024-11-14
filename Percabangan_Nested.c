#include<stdio.h>
#include<string.h>

void main(){
    char username[30], password[30];

    printf("===Welcome To Tic-Tac-Toe Game===\n");
    printf("Username : ");
    scanf("%s",&username);
    printf("Password : ");
    scanf("%i",&password);

    if(strcmp(username,"Amadeus") == 0 ){
        if(password , 12345){
            printf("Selamat datang Amadeus!\n");
        } else {
            printf("Password salah\n");
        }
    } else {
        printf("Anda belum terdaftar\n");
    }
}