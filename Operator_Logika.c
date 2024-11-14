//Operator Logika (Boolean)
#include<stdio.h>
void main(){
    int a = 1; //True
    int b = 0; //False
    int c = 1; //True
    int d = 0; //False

    //Menampilkan variabel a,b,c dan d
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    printf("d = %d\n",d);

    //LOGIKA AND
    printf("a && b = %d\n", a && b);
    printf("a && c = %d\n", a && c);
    printf("b && d = %d\n", b && d);

    //LOGIKA OR
    printf("a || b = %d\n", a || b);
    printf("a || c = %d\n", a || c);
    printf("b || d = %d\n", b && d);

    //LOGIKA NEGASI(NOT)
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);

}