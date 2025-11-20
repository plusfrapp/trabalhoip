#include <stdio.h>
void Resto(int entrada1, int entrada2, int *resposta);
void Shift_A_Esquerda(int entrada1, int entrada2, int *resposta);
void Igualdade(int entrada1, int entrada2, int *resposta);
void NAND(int entrada1, int entrada2, int *resposta);
void potencia(int entrada1, int entrada2, int *resposta);

int main(){

    return 0;
}

void Resto(int entrada1, int entrada2, int *resposta){
    *resposta = entrada1%entrada2;
}

void Shift_A_Esquerda(int entrada1, int entrada2, int *resposta){
    int pow;
    potencia(2,entrada2,&pow);
    *resposta = entrada1*pow;
}

void Igualdade(int entrada1, int entrada2, int *resposta){
    if(entrada1==entrada2) *resposta = 1;
    else *resposta = 0;
}

void NAND(int entrada1, int entrada2, int *resposta){
    if(entrada1==1 && entrada2==1) *resposta = 0;
    else *resposta = 1;
}



void potencia(int entrada1, int entrada2, int *resposta){
    int i;
    if(entrada2==0) *resposta = 1;
    else{
        *resposta = 1;
        for(i=1;i<=entrada2;i++){
            *resposta *= entrada1;
        }
    }
}