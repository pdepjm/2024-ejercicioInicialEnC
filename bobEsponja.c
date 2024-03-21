#include <stdio.h>

void bobEsponja(int a[], int b, int c[]){
  int d, e = 0;  
  for (d = 0; d < b; d++) { 
    if (a[d] % 2 == 0) { 
        c[e] = a[d]; 
        e = e + 1; 
    }
}
}

void main(){
    int entrada[] = {1,2,3,4,5,6,7,8,9};
    int salida[] = {0,0,0,0,0,0,0,0,0};
    bobEsponja(entrada, 9, salida);
    printf("Salida: [%d,%d,%d,%d,%d,%d,%d,%d,%d]\n", salida[0], salida[1], salida[2], salida[3], salida[4], salida[5], salida[6], salida[7], salida[8]);
}