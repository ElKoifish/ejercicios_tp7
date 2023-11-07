#include <stdio.h>
#include <stdlib.h>

int main() {
	int torre[6][20];
	int columnas=0;
	int promedio=0;
	int habitantesTotales=0;
	
	for(int filas=0;filas<20;filas++) {
	for(int columnas=0;columnas<6;columnas++) {
	
		printf("Numero de torre: %d\n", filas+1);
		printf("Numero de departamento: %d\n",columnas+1);
		printf("Ingrese los habitantes de la torre: \n");
		scanf("%d", &torre[filas][columnas]);
		habitantesTotales+=torre[filas][columnas];
	}
	
	promedio=torre[filas][columnas]+torre[filas][2]+torre[filas][3]+torre[filas][4]+torre[filas][5];
	promedio=promedio/5;
	printf("\n\nEl promedio de habitantes por piso es de: %d\n\n",promedio);
	}
	
	printf("Numero total de habitantes: %d\n",habitantesTotales);
	
	return 0;
}

