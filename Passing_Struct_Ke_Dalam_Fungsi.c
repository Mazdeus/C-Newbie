#include <stdio.h>
struct murid
{
    char name [20];
    int age;
};

void display(struct murid s){
    printf("\nInformasi Terkait\n");
    printf("Name : %s\n",s.name);
    printf("Umur : %i",s.age);
}

void main(){
    struct murid s1;

    printf("Enter name : ");
    scanf("%[^\n]%*c",s1.name);

    printf("Enter age : ");
    scanf("%i",&s1.age);
    
    display(s1);
}