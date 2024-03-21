#include <stdio.h>

int esPar(int numero){
    return numero % 2 == 0;
}

void pares(int entrada[], int cantidadElementos, int salida[]){
  int i, j = 0;  
  for (i = 0; i < cantidadElementos; i++) { 
    if (esPar(entrada[i])) { 
        salida[j] = entrada[i]; 
        j = j + 1; 
    }
}
}

void main(){
    int entrada[] = {1,2,3,4,5,6,7,8,9};
    int salida[] = {0,0,0,0,0,0,0,0,0};
    pares(entrada, 9, salida);
    printf("Salida: [%d,%d,%d,%d,%d,%d,%d,%d,%d]\n", salida[0], salida[1], salida[2], salida[3], salida[4], salida[5], salida[6], salida[7], salida[8]);
}