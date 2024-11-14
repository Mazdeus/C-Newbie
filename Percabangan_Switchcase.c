#include<stdio.h>
#include<ctype.h>

void main(){
    char grade;

    printf("Input grade : ");
    scanf("%c",&grade);

    switch(toupper(grade)){
        case 'A':
            printf("Luar biasa!\n");
            break;
        case 'B':
        case 'C':
            printf("Bagus!\n");
            break;
        case 'D':
            printf("Lumayan!\n");
            break;
        case 'E':
        case 'F':
            printf("Anda remedial!\n");
            break;
        default :
            printf("Grade salah!\n");    
    }
}