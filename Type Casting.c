#include<stdio.h>
void main(){
    int a = 9;
    int b = 2;

    float c = a/b;
    float d = (float) a/b;
    float e = (float) a / (float) b;

    printf("Hasil c = %.2f\n",c);
    printf("Hasil d = %.2f\n",d);
    printf("Hasil e = %.2f\n",e);

}