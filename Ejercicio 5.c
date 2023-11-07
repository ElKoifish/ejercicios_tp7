#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[100][3],fila=0,col=0;
	float promedio;
	
	
	for(fila=0;fila<5;fila++){
		for(col=0;col<3;col++){
			printf("Alumno N°%d, ingrese nota del trimestre n°%d: \n",fila+1,col+1);
			scanf("%d",&matriz[fila][col]);
		}
		printf("\n");
	}
	
	printf("\n N° de alumno        1° Trimestre        2° Trimestre        3° Trimestre        Promedio");
	
	for(fila=0;fila<5;fila++){
		
		printf("\n%d",fila+1);
		
		for(col=0;col<3;col++){
			printf("                   %d",matriz[fila][col]);
			promedio=(promedio+matriz[fila][col]);
		}
		
		n=(n+promedio)/3;
		
		printf("                   %f",promedio/3);
		printf("\n\n");
		promedio=0;
	}
	
	system("pause");
	return 0;
}
	
