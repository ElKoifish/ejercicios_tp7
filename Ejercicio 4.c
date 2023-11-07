#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int linea_colectora[3][12];
	int auto_colectora[12][3];
	int colectora_general[12];
	int automovil=0;
	int linea=0;
	
	for (int linea=1;linea<=3; linea++) {
		for(int automovil=1;automovil<=12; automovil++);
		printf("Ingrese la linea de colectivo: \n");
		scanf("%d",&linea);
		printf("Ingrese el numero del automovil: \n");
		scanf("%d",&automovil);
		printf("Ingrese la colectora: ");
		scanf("%d", &linea_colectora[linea][automovil]);
	}


	for(int automovil=1;automovil<=13;automovil++) {
	auto_colectora[automovil][1]=0;
	auto_colectora[automovil][2]=0;
	auto_colectora[automovil][3]=0;
	for(int linea=1;linea<=3;linea++) {
		auto_colectora[automovil][linea]+=linea_colectora[linea][automovil];
	}
	colectora_general[automovil]=auto_colectora[automovil][1]+auto_colectora[automovil][2]+auto_colectora[automovil][3];
}
	printf("La recaudacion del colectivo es: %d\n",linea_colectora);
	printf("La recaudacion por coche es de: %d\n",auto_colectora);
	printf("La recaudacion total es: %d\n",colectora_general);
}
