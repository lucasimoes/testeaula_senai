#include<stdio.h>

int DadosNum(){
    int numero;
    printf("\nInforme valores:");
    scanf("%i", &numero);
    return numero;
}
int Cubo(int numero){
    int resultadoCubo;
    resultadoCubo = numero*numero*numero;
    return resultadoCubo;
}
int main(){
    int numero, resultadoCubo;
    numero = DadosNum();
    resultadoCubo = Cubo(numero);
    printf("\nO valor ao cubo = %i",resultadoCubo);
}
