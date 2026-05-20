#include <stdio.h>
#include <stdlib.h>
#include "function_potencia.c"

int main(int argc, char const *argv[])
{
	if(argc != 3){
        printf("digite o nome do programa seguido de 2 argumentos (ex: potencia 5 2)");
        printf("\nsendo 5 a base e 2 o expoente, esses valores podem ser quaisquer inteiros");
    }else{
    	double num1 = atof(argv[1]);
    	double num2 = atof(argv[2]);
		printf("resultado: %f\n", potencia(num1, num2));
		printf("\nFeito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");
    }

    return 0;
}