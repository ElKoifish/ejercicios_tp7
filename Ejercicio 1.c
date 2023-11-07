#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[2][3] = { {1,2}, {1,2} };
	int fila,columna;
	
	for(int fila=0;fila<2;fila++){
		for(int columna=0;columna<3;columna++){
			printf("%d ",matriz[fila][columna]);
		}
		printf("\n");
	}
	
	return 0;
}

