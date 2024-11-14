#include<stdio.h>

int main(){
    int nilai;
    char grade;

    printf("===Program Grade Nilai===\n");
    printf("Inputkan nilai : ");
    scanf("%i",&nilai);

    //Percabangan if-else-if
    if(nilai >= 90){
        grade = 'A';
    }   else if (nilai >= 80){
        grade = 'B';
    }   else if (nilai >= 70){
        grade = 'B';
    }   else if (nilai >= 60){
        grade = 'C';
    }   else if (nilai >= 50){
        grade = 'C';
    }   else if (nilai >= 40){
        grade = 'D';
    }   else if (nilai >= 30){
        grade = 'E';
    }   else {
        grade = 'F';
    }

    printf("Nilai : %i\n",nilai);
    printf("Grade anda : %s\n",grade);
    
    return 0;
}

/* Percabangan if-else-if ketika ingin menampilkan +
#include<stdio.h>
#include<string.h>
int main() {
    int nilai;
    char grade[3];  // Menggunakan array karakter untuk menyimpan grade

    printf("===Program Grade Nilai===\n");
    printf("Inputkan nilai : ");
    scanf("%i", &nilai);

    // Percabangan if-else-if
    if (nilai >= 90) {
        strcpy(grade, "A");
    } else if (nilai >= 80) {
        strcpy(grade, "B+");
    } else if (nilai >= 70) {
        strcpy(grade, "B");
    } else if (nilai >= 60) {
        strcpy(grade, "C+");
    } else if (nilai >= 50) {
        strcpy(grade, "C");
    } else if (nilai >= 40) {
        strcpy(grade, "D");
    } else if (nilai >= 30) {
        strcpy(grade, "E");
    } else {
        strcpy(grade, "F");
    }

    printf("Nilai : %i\n", nilai);
    printf("Grade anda : %s\n", grade);

    return 0;
}
*/    