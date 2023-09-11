/*Aluno: Francisco Vinicius de Freitas Carneiro*/

#include <stdio.h>

int main(){
    float horario;
    float minutos, minutos2, segundos;

    printf("Digite a hora e os minutos: Ex: 15.05\n");
    scanf("%f", &horario);

if((int) horario >= 0 && (int) horario < 24 && (horario - ((int) horario)) >= 0 && (horario - ((int) horario)) < 60){

    minutos = ((int) horario * 60);
    minutos2 = ((horario - ((int) horario)) * 100) + minutos;
    segundos = minutos2 * 60;

    printf("O horario corresponde, em minutos, a: %.0f\n", minutos2);
    printf("E, em segundos, corresponde a: %.0f\n", segundos);
    
}else{
    printf("Horario invalido");
}

return 0;
}