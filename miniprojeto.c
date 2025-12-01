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
    int n, entrada1, entrada2, resposta;
    long long int resposta_lld;
    double resposta_double;
    char funcoes[28][30];

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
    printf("Escolha o numero da função que deseja usar:");

    // 1) Soma
    if(n==1){
        scanf("%d%d", &entrada1, &entrada2);
        soma(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 2) Subtração
    if(n==2){
        scanf("%d%d", &entrada1, &entrada2);
        sub(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 3) Multiplicação
    if(n==3){
        scanf("%d%d", &entrada1, &entrada2);
        multiplicacao(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 4) Divisão
    if(n==4){
        scanf("%d%d", &entrada1, &entrada2);
        div(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %.2lf\n" ,   funcoes[n][0], resposta_double);
    }

    // 5) Resto
    if(n==5){
        scanf("%d%d", &entrada1, &entrada2);
        Resto(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 6) Potência
    if(n==6){
        scanf("%d%d", &entrada1, &entrada2);
        potencia(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 7) Fatoração
    if(n==7){
        scanf("%d", &entrada1);
        fatoracao(entrada1, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 8) AND bit a bit
    if(n==8){
        scanf("%d%d", &entrada1, &entrada2);
        and_bit_a_bit(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 9) OR bit a bit
    if(n==9){
        scanf("%d%d", &entrada1, &entrada2);
        or_bit_a_bit(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 10) XOR bit a bit
    if(n==10){
        scanf("%d%d", &entrada1, &entrada2);
        xor_bits(entrada1, entrada2, 0, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 11) Shift direita
    if(n==11){
        scanf("%d%d", &entrada1, &entrada2);
        shiftDir(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 12) Shift esquerda
    if(n==12){
        scanf("%d%d", &entrada1, &entrada2);
        Shift_A_Esquerda(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 13) Média
    if(n==13){
        scanf("%d%d", &entrada1, &entrada2);
        media(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 14) Somatório de intervalo
    if(n==14){
        scanf("%d%d", &entrada1, &entrada2);
        s_intervalo(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %lld\n" ,   funcoes[n][0], resposta_lld);
    }

    // 15) Produtório intervalo
    if(n==15){
        scanf("%d%d", &entrada1, &entrada2);
        produtorio(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %lld\n" ,   funcoes[n][0], resposta_lld);
    }

    // 16) Mínimo
    if(n==16){
        scanf("%d%d", &entrada1, &entrada2);
        min(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 17) Máximo
    if(n==17){
        scanf("%d%d", &entrada1, &entrada2);
        maximo(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 18) Absoluto
    if(n==18){
        scanf("%d", &entrada1);
        absoluto(entrada1, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 19) Igualdade
    if(n==19){
        scanf("%d%d", &entrada1, &entrada2);
        Igualdade(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 20) Diferente
    if(n==20){
        scanf("%d%d", &entrada1, &entrada2);
        diferente(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 21) Maior que
    if(n==21){
        scanf("%d%d", &entrada1, &entrada2);
        maiorq(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 22) Menor que
    if(n==22){
        scanf("%d%d", &entrada1, &entrada2);
        menor(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 23) Maior igual
    if(n==23){
        scanf("%d%d", &entrada1, &entrada2);
        maior_igual(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 24) Menor igual
    if(n==24){
        scanf("%d%d", &entrada1, &entrada2);
        menor_igual(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 25) AND lógico
    if(n==25){
        scanf("%d%d", &entrada1, &entrada2);
        and(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 26) NAND
    if(n==26){
        scanf("%d%d", &entrada1, &entrada2);
        NAND(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 27) OR lógico
    if(n==27){
        scanf("%d%d", &entrada1, &entrada2);
        OR(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }

    // 28) NOR lógico
    if(n==28){
        scanf("%d%d", &entrada1, &entrada2);
        nor(entrada1, entrada2, &resposta);
        printf ("Resultado da operação  %s :  %d\n" ,   funcoes[n][0], resposta);
    }
    //4 14 15

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
    
    for(i=1;i<=entrada1;i++) *resposta*=i;
    
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

    long long int soma = 0;
    int i,temp;
    
    if(entrada1>entrada2){
        temp=entrada1;
        entrada1=entrada2;
        entrada2=temp;
    }

    for (i = entrada1; i <=entrada2; i++) {
        soma += i;
    }

    *resposta = soma;
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
    else *resposta = entrada1;
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
    if(entrada1 < entrada2) *resposta = 1;
    else *resposta = 0;
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