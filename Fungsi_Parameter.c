//Fungsi dengan parameter
#include<stdio.h>
void say_hello(char name[]){
    printf("Hello %s!\n",name);
}

void main(){
    say_hello ("Amadeus");
    say_hello ("Andika");
    say_hello ("Fadhil");
}