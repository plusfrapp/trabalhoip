#include <stdio.h>

void sub(int *entrada1, int *entrada2, int *saida); // Função 2
void or_bit_a_bit(int *entrada1, int *entrada2, int *saida); // Função 9
void min(int *entrada1, int *entrada2, int *saida); // Função 16
void maior_igual(int *entrada1, int *entrada2, int *saida); //Função 23

int main(){

    return 0;
} 


//2
void sub(int *entrada1, int *entrada2, int *saida){
    *saida = *entrada1 - *entrada2;
}

//9
void or_bit_a_bit(int *entrada1, int *entrada2, int *saida){
    *saida = *entrada1 | *entrada2;
}

//16
void min(int *entrada1, int *entrada2, int *saida){
    if(*entrada1 < *entrada2) *saida = *entrada1;
    else *saida = *entrada2;
}

//23
void maior_igual(int *entrada1, int *entrada2, int *saida){
    if(*entrada1 >= *entrada2) *saida = 1;
    else *saida = 0;
}


