#include<stdio.h>
void main(){
    int tinggi_badan [10] = {175,170,165,160,155,150,145,140,135,130};

    int length = sizeof(tinggi_badan) / sizeof(*tinggi_badan);
    int sum = 0;

    for(int i=0 ; i<length ; i++){
        sum+= tinggi_badan[i];
    }
    float rata_rata = (float) sum / length;

    printf("Rata-rata tinggi badan : %.2f\n",rata_rata);
}