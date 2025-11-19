void div(int a, int b, double * c){
    *c = a/(double)b;
}
void shiftDir(int *a, int b) {
    *a /= pow(2, b);
}
void abs(int *a){
    if(*a < 0) *a *= -1;
}
void and(int a, int b, char * str){
    int i;
    char sim[4] = {"SIM"}, nao[4] = {"NAO"};

    if((a==1 && b==0) || (a==0 && b==1)) strcpy(str, nao);
    if((a==1 && b==1) || (a==0 && b==0)) strcpy(str, sim);
}