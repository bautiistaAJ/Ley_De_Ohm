/////////////////////////////////////
// Autor: Arturo Bautista de Jesus //
// Fecha: 31/marzo/2019            //  
// Nombre: leyDeOhm.c® ©           //
/////////////////////////////////////

#include<stdio.h> /*librerias*/

/*prototipos de funciones*/
float calcularVoltaje();
float calcularResistencia();
float calcularIntensidad();

float voltaje, resistencia, intensidad; /*variables globales*/

int main(){
	int opcion;/*variable auxiliar*/
	float resultado;/*variable auxiliar para alojar el resultado de las operaciones*/
	do{/*ciclo do while para mostrar el menu del programa hasta que ya no quieramos*/
		system("cls");/*limpiamos lo que hay en pantalla*/
		printf("-- Ley de Ohm --\n\n");
		printf("Calcular\n");
		printf("[1]..Voltaje del circuito \n[2]..Resistencia del circuito \n[3]..Intensidad del circuito \n[4]..Salir");
		printf("\nEscriba la opcion deseada: ");
		scanf("%i",&opcion);/*guarda el dato tecleado*/
		
		switch(opcion){/*evalua la variable "opcion" y nos manda al "case" correspondiente*/
			case 1:
				system("cls");
				printf("Calculando Voltaje del circuito\n");
				
				resultado = calcularVoltaje();/*guardamos el resultado de la funcion en la variable*/
				printf("\n El voltaje es de: %.2f voltios",resultado);/*se imprime la variable con el resultado*/
				getch();/*pausa el programa hasta que se oprima una tecla*/
				break;
			case 2:
				system("cls");
				printf("Calculando la Resistencia del circuito\n");
				
				resultado = calcularResistencia();/*guardamos el resultado de la funcion en la variable*/
				printf("\n La Resistencia es de: %.2f ohm",resultado);/*se imprime la variable con el resultado*/
				getch();/*pausa el programa hasta que se oprima una tecla*/
				break;
			case 3:
				system("cls");
				printf("Calculando Intensidad del circuito\n");
				
				resultado = calcularIntensidad();/*guardamos el resultado de la funcion en la variable*/
				printf("\n La Intensidad es de: %.2f amperes",resultado);/*se imprime la variable con el resultado*/
				getch();/*pausa el programa hasta que se oprima una tecla*/
				break;
			case 4:
				printf("Terminando ejecucion...");
				break;
		}
		
	}while(opcion != 4);
	
	return 0;
}

float calcularVoltaje(){
	
	printf("\n Escriba la intensidad: ");
	scanf("%f",&intensidad);/*se guarda el dato que se tecleo*/
	printf("\n Escriba la resistencia: ");
	scanf("%f",&resistencia);/*se guarda el dato que se tecleo*/
	
	voltaje = intensidad * resistencia; /*en la variable "voltaje" se guarda el resultado de la operacion que se hace con la variable "intensidad" y "resistencia"*/
	
	return voltaje;/*retorna el resultado*/
}

float calcularResistencia(){
	printf("\n Escriba el voltaje: ");
	scanf("%f",&voltaje);/*se guarda el dato que se tecleo*/
	printf("\n Escriba la intensidad: ");
	scanf("%f",&intensidad);/*se guarda el dato que se tecleo*/
	
	resistencia = voltaje / intensidad;/*en la variable "resistencia" se guarda el resultado de la operacion que se hace con las variables "voltaje" y "intensidad"*/
	
	return resistencia;/*retorna el resultado*/	
}
float calcularIntensidad(){
	printf("\n Escriba el voltaje: ");
	scanf("%f",&voltaje);/*se guarda el dato que se tecleo*/
	printf("\n Escriba la resistencia: ");
	scanf("%f",&resistencia);/*se guarda el dato que se tecleo*/
	
	intensidad = voltaje / resistencia;/*en la variable "intensidad" se guarda el resultado de la operacion que se hace con las variables "voltaje" y "resistencia"*/
	
	return intensidad;/*retorna el resultado*/	
}
