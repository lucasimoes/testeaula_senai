#include<stdio.h>

int DadosNumeros(){
    int num;
    printf("\nInforme valores:");
    scanf("%i", &num);
    return num;
}
int Operacao (int num){
    int resultado;
    resultado = num * num * num;
    return resultado;
}
float OperacaoVolume(int resultado){
    float Volume, pi=3.14;
    Volume = (4*pi*resultado)/3;
    return Volume;
}
int main(){
    int num, resultado;
    //float Volume;
    num = DadosNumeros();
    //resultado = Operacao(num);
    //printf("\n%i ao cubo e = %i", num, resultado);
    //Volume=OperacaoVolume(resultado);
    //printf("\nO volume da esfera = %.2f",Volume);
}
