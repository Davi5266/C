#include <stdio.h>
// Definição de macros
#define TEMPO_MINUTOS 60
#define TEMPO_SEGUNDOS 60
#define HORAS_DIAS 24

#define Media(a,b,c) ((a+c+b)/3)

int quedaResistente();
int quedaSemResistemcia();
int simulaQueda(int altura);

void main(){
    int x=10, y=20, z=93, resultado;
    resultado = Media(x,y,z);
    simulaQueda(54);

}

#define GRAVIDADE 91

// Compilação condicional
int simulaQueda(int altura){
    #if (GRAVIDADE == 9807)
        //printf('Queda com resistencia ao ar');
	quedaResistente();
    #elif (GRAVIDADE > 90)
        //printf('Queda sem resistencia ao ar');
	quedaSemResistemcia();
    #endif
}

int quedaResistente(){
	printf("COM\n");
	return 0;
}

int quedaSemResistemcia(){
	printf("SEM\n");
	return 0;
}
