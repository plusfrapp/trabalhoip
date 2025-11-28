#include <stdio.h>
//1
void sub(int *entrada1, int *entrada2, int *saida); // Função 2
void multiplicacao( int entrada1, int entrada2, int * saida); //3
void div(int a, int b, double * c); //4
void Resto(int entrada1, int entrada2, int *resposta); //5
void potencia(int entrada1, int entrada2, int *resposta); //6
void fatoracao(int * entrada1, int * saida); //7
//8
void or_bit_a_bit(int *entrada1, int *entrada2, int *saida); // Função 9
void xor_bits( int entrada1, int entrada2, int tam, int * saida); //10
void shiftDir(int *a, int b); //11
void Shift_A_Esquerda(int entrada1, int entrada2, int *resposta); //12
//13
void s_intervalo( int * entrada1, int * entrada2, long long int * saida); //14
//15
void min(int *entrada1, int *entrada2, int *saida); // Função 16
void maximo( int entrada1, int entrada2, int * saida); //17
void abs(int *a); //18
void Igualdade(int entrada1, int entrada2, int *resposta); //19
//20
void maiorq( int * entrada1, int * entrada2, int * saida); //21
//22
void maior_igual(int *entrada1, int *entrada2, int *saida); //Função 23
void menor_igual( int entrada1, int entrada2, int * saida); //24
void and(int a, int b, char * str); //25
void NAND(int entrada1, int entrada2, int *resposta); //26
//27
void nor( int * entrada1, int * entrada2, int * saida); //28

int main(){

    return 0;
}

void sub(int *entrada1, int *entrada2, int *saida){ //2
    *saida = *entrada1 - *entrada2;
}
void multiplicacao( int entrada1, int entrada2, int * saida){ //3
    * saida = ( entrada1) * ( entrada2);
}
void div(int a, int b, double * c){ //4
    *c = a/(double)b;
}
void Resto(int entrada1, int entrada2, int *resposta){ //5
    *resposta = entrada1%entrada2;
}
void potencia(int entrada1, int entrada2, int *resposta){ //6
    int i;
    if(entrada2==0) *resposta = 1;
    else{
        *resposta = 1;
        for(i=1;i<=entrada2;i++){
            *resposta *= entrada1;
        }
    }
}
void fatoracao(int * entrada1, int * saida){ //7
    
    int i;
    *saida=1;
    
    for(i=1;i<*entrada1;i++) *saida*=i;
    
}
void or_bit_a_bit(int *entrada1, int *entrada2, int *saida){ //9
    *saida = *entrada1 | *entrada2;
}
void xor_bits( int entrada1, int entrada2, int tam, int * saida){ //10
    * saida = entrada1 ^ entrada2;
}
void shiftDir(int *a, int b) { //11
    *a /= pow(2, b);
}
void Shift_A_Esquerda(int entrada1, int entrada2, int *resposta){ //12
    int pow;
    potencia(2,entrada2,&pow);
    *resposta = entrada1*pow;
}
void s_intervalo( int * entrada1, int * entrada2, long long int * saida){ //14

    int i,n=*entrada2-*entrada1+1,temp;
    
    if(*entrada1>*entrada2){
        temp=*entrada1;
        *entrada1=*entrada2;
        *entrada2=temp;
    }
}
void min(int *entrada1, int *entrada2, int *saida){ //16
    if(*entrada1 < *entrada2) *saida = *entrada1;
    else *saida = *entrada2;
}
void maximo( int entrada1, int entrada2, int * saida){ //17
    if ( entrada1 > entrada2 ) * saida = entrada1;
    else * saida = entrada2;
}
void abs(int *a){ //18
    if(*a < 0) *a *= -1;
}
void Igualdade(int entrada1, int entrada2, int *resposta){ //19
    if(entrada1==entrada2) *resposta = 1;
    else *resposta = 0;
}
void maiorq( int * entrada1, int * entrada2, int * saida){ //21

    if(*entrada1>*entrada2)*saida=1;
    else *saida=0;

}
void maior_igual(int *entrada1, int *entrada2, int *saida){ //23
    if(*entrada1 >= *entrada2) *saida = 1;
    else *saida = 0;
}
void menor_igual( int entrada1, int entrada2, int * saida){ //24
    if ( entrada1 <= entrada2 ) * saida = 1;
    else * saida = 0;
}
void and(int a, int b, char * str){ //25
    int i;
    char sim[4] = {"SIM"}, nao[4] = {"NAO"};

    if((a==1 && b==0) || (a==0 && b==1)) strcpy(str, nao);
    if((a==1 && b==1) || (a==0 && b==0)) strcpy(str, sim);
}
void NAND(int entrada1, int entrada2, int *resposta){ //26
    if(entrada1==1 && entrada2==1) *resposta = 0;
    else *resposta = 1;
}
void nor( int * entrada1, int * entrada2, int * saida){ //28

    if(*entrada1==0&&*entrada2==0)*saida=1;
    else *saida = 0;

}