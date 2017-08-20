#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "");

    int dia_atual = 20;
    int mes_atual = 8;
    int ano_atual = 2017;
    int dia_nasc,mes_nasc,ano_nasc,conv_dia,conv_mes,conv_ano,resultado;


    printf("Digite o ano de nascimento: \n");
    scanf("%d",&ano_nasc );
    printf("Digite o mes de nascimento: \n");
    scanf("%d",&mes_nasc );
    printf("Digite o dia de nascimento: \n");
    scanf("%d",&dia_nasc );

    conv_ano = (ano_atual - ano_nasc) * 365;
    conv_mes = (mes_atual - mes_nasc) * 30;
    conv_dia = dia_atual - dia_nasc;
    resultado = conv_ano + conv_mes + conv_dia;

    printf("A sua idade em dias é : %d " , resultado);


}
