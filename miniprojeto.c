#include <stdio.h>
#include <string.h>
#define SIM 1
#define NAO 0

void soma(int entrada1, int entrada2, int *resposta); //1
void sub(int entrada1, int entrada2, int * resposta); // Função 2
void multiplicacao( int entrada1, int entrada2, int * resposta); //3
void div(int entrada1, int entrada2, double * resposta); //4
void Resto(int entrada1, int entrada2, int * resposta); //5
void potencia(int entrada1, int entrada2, int * resposta); //6
void fatoracao(int entrada1, int * resposta); //7
void and_bit_a_bit(int entrada1, int entrada2, int *resposta); //8
void or_bit_a_bit(int entrada1, int entrada2, int * resposta); // Função 9
void xor_bits( int entrada1, int entrada2, int tam, int * resposta); //10
void shiftDir(int entrada1, int entrada2, int *resposta); //11
void Shift_A_Esquerda(int entrada1, int entrada2, int * resposta); //12
//13
void s_intervalo( int entrada1, int entrada2, long long int * resposta); //14
void produtorio_intervalo(int entrada1, int entrada2, long long int *resposta); //15
void min(int entrada1, int entrada2, int * resposta); // Função 16
void maximo( int entrada1, int entrada2, int * resposta); //17
void absoluto(int entrada1, int *resposta); //18
void Igualdade(int entrada1, int entrada2, int *resposta); //19
//20
void maiorq( int entrada1, int entrada2, int * resposta); //21
void menor_que(int entrada1, int entrada2, int *resposta); //22
void maior_igual(int entrada1, int entrada2, int * resposta); //Função 23
void menor_igual( int entrada1, int entrada2, int * resposta); //24
void and(int entrada1, int entrada2, int * resposta); //25
void NAND(int entrada1, int entrada2, int * resposta); //26
//27
void nor( int entrada1, int entrada2, int * resposta); //28

int main(){

    printf("Funcoes disponiveis:\n");
    printf("1) Soma (+)\n");
    printf("2) Subtracao (-)\n");
    printf("3) Multiplicacao (*)\n");
    printf("4) Divisao (/)\n");
    printf("5) Resto (%%)\n");
    printf("6) Potencia (~)\n");
    printf("7) Fatoracao (!)\n");
    printf("8) AND bit a bit (&)\n");
    printf("9) OR bit a bit (|)\n");
    printf("10) XOR bit a bit (^)\n");
    printf("11) Shift a direita (>>)\n");
    printf("12) Shift a esquerda (<<)\n");
    printf("13) Media de dois numeros (M)\n");
    printf("14) Somatorio de um intervalo (S)\n");
    printf("15) Produtorio de um intervalo (P)\n");
    printf("16) Minimo entre dois numeros (min)\n");
    printf("17) Maximo entre dois numeros (max)\n");
    printf("18) Valor absoluto de um numero (abs)\n");
    printf("19) Igualdade (==)\n");
    printf("20) Diferenca (!=)\n");
    printf("21) Maior que (>)\n");
    printf("22) Menor que (<)\n");
    printf("23) Maior ou igual (>=)\n");
    printf("24) Menor ou igual (<=)\n");
    printf("25) AND (&&)\n");
    printf("26) NAND (!&)\n");
    printf("27) OR (||)\n");
    printf("28) NOR (!|)\n");
  

    return 0;
}

void soma(int entrada1, int entrada2, int *resposta) { //1
    *resposta = entrada1 + entrada2;
}

void sub(int entrada1, int entrada2, int * resposta){ //2
    *resposta = entrada1 - entrada2;
}
void multiplicacao( int entrada1, int entrada2, int * resposta){ //3
    * resposta = ( entrada1) * ( entrada2);
}
void div(int entrada1, int entrada2, double * resposta){ //4
    *resposta = entrada1/(double)entrada2;
}
void Resto(int entrada1, int entrada2, int * resposta){ //5
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
void fatoracao(int entrada1, int * resposta){ //7
    
    int i;
    *resposta=1;
    
    for(i=1;i<entrada1;i++) *resposta*=i;
    
}
void and_bit_a_bit(int entrada1, int entrada2, int *resposta) { //8
    *resposta = entrada1 & entrada2;
}
void or_bit_a_bit(int entrada1, int entrada2, int * resposta){ //9
    *resposta = entrada1 | entrada2;
}
void xor_bits( int entrada1, int entrada2, int tam, int * resposta){ //10
    * resposta = entrada1 ^ entrada2;
}
void shiftDir(int entrada1, int entrada2, int * resposta) { //11
    int pow;
    potencia(2, entrada2, &pow);
    *resposta = entrada1/pow;
}
void Shift_A_Esquerda(int entrada1, int entrada2, int * resposta){ //12
    int pow;
    potencia(2,entrada2,&pow);
    *resposta = entrada1*pow;
}
void s_intervalo( int entrada1, int entrada2, long long int * resposta){ //14

    int i,n=entrada2-entrada1+1,temp;
    
    if(entrada1>entrada2){
        temp=entrada1;
        entrada1=entrada2;
        entrada2=temp;
    }
}
void produtorio_intervalo(int entrada1, int entrada2, long long int *resposta) { //15
    *resposta = 1;
    int i;
    int start = entrada1;
    int end = entrada2;

    if (entrada1 > entrada2) {
        start = entrada2;
        end = entrada1;
    }

    for (i = start; i <= end; i++) {
        if (i == 0) {
            *resposta = 0;
            return;
        }
        *resposta *= (long long int)i;
    }
}
void min(int entrada1, int entrada2, int * resposta){ //16
    if(entrada1 < entrada2) *resposta = entrada1;
    else *resposta = entrada2;
}
void maximo( int entrada1, int entrada2, int * resposta){ //17
    if ( entrada1 > entrada2 ) * resposta = entrada1;
    else * resposta = entrada2;
}
void absoluto(int entrada1, int *resposta){ //18
    if(entrada1 < 0) *resposta = -1*entrada1;
}
void Igualdade(int entrada1, int entrada2, int * resposta){ //19
    if(entrada1==entrada2) *resposta = 1;
    else *resposta = 0;
}
void maiorq( int entrada1, int entrada2, int * resposta){ //21

    if(entrada1>entrada2)*resposta=1;
    else *resposta=0;

}
void menor_que(int entrada1, int entrada2, int *resposta) { //22
    *resposta = (entrada1 < entrada2) ? SIM : NAO;
}
void maior_igual(int entrada1, int entrada2, int * resposta){ //23
    if(entrada1 >= entrada2) *resposta = 1;
    else *resposta = 0;
}
void menor_igual( int entrada1, int entrada2, int * resposta){ //24
    if ( entrada1 <= entrada2 ) * resposta = 1;
    else * resposta = 0;
}
void and(int entrada1, int entrada2, int * resposta){ //25

    if((entrada1==1 && entrada2==0) || (entrada1==0 && entrada2==1)) *resposta = 0;
    if((entrada1==1 && entrada2==1) || (entrada1==0 && entrada2==0)) *resposta = 1;
}
void NAND(int entrada1, int entrada2, int * resposta){ //26
    if(entrada1==1 && entrada2==1) *resposta = 0;
    else *resposta = 1;
}
void nor( int entrada1, int entrada2, int * resposta){ //28

    if(entrada1==0&&entrada2==0)*resposta=1;
    else *resposta = 0;

}