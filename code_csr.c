void multiplicacao( int entrada1, int entrada2, int * saida);
void xor_bits( int entrada1, int entrada2, int tam, int * saida);
void maximo( int entrada1, int entrada2, int * saida);
void menor_igual( int entrada1, int entrada2, int * saida);


void multiplicacao( int entrada1, int entrada2, int * saida){

    * saida = ( entrada1) * ( entrada2);
}

/*
void xor_bits( int * entrada1, int * entrada2, int tam, int * saida){

    int i;

    for ( i = 0 ; i < tam ; i++ ){
        if ( * (entrada1 + i) == * (entrada2 + i)) * (saida + i) = 0;
        else if ( * (entrada1 + i) != * (entrada2 + i)) * (saida + i) = 1;
    } 
}
*/

void xor_bits( int entrada1, int entrada2, int tam, int * saida){

    * saida = entrada1 ^ entrada2;
}

void maximo( int entrada1, int entrada2, int * saida){

    if ( entrada1 > entrada2 ) * saida = entrada1;
    else * saida = entrada2;
}

void menor_igual( int entrada1, int entrada2, int * saida){

    if ( entrada1 <= entrada2 ) * saida = 1;
    else * saida = 0;
}