#include <iostream>
#include <conio.h> // Para getch();
#include <string.h> //Libreia estandar para la cadena de caracteres, importante.
#include <stdlib.h> //Para las funciones atof y atoi.
#define dimension_arreglo 30 //Dimension del arreglo.
using namespace std;

/*NOTAS
	*GUARDAR CONTENIDO:	cin.getline(nombre,20,'\n'); para digitar la cadena de caracteres: nombre de la variable, numero de elementos, cuando termina.
	El cin no sirve para guardar cadenas de caracteres, un caracter puede ser una letra, un simbolo o un numero. Si hay un espacio en blanco para el cin es que termino la cadena y no guardará nada de lo que hay despues.
	gets(nombre) Guarda, es malo y perjudicial, asigna espacio de memoria de otros lugares, por lo tanto puede generar problemas de rendimiento y optimización.
	
	*LONGITUD DE CADENA: variable = strlen(), parametro: variable. La función devuelve un resultado de tipo de entero a la cual habrá que asignarla a una variable del mismo tipo de dato.
	
	*COPIAR EL CONTENIDO DE UNA CADENA A OTRA: strcpy(), parametros: primero cadena vacia, segundo cadena donde lo almacenaremos.
	
	*COMPARAR CADENAS: strcmp(string, string), parametros: se utiliza más que nada en condicionales, sirve para verificar si las cadenas son iguales o tambien para reconocer si un string es mayor a otro alfabéticamente.
	
	*AÑADIR O CONCATENAR UNA CADENA A OTRA: strcat(), parametros: arreglo al que almacenaremos las cadenas, la cadena a la cual guardaremos.
	
	*INVERTIR UNA CADENA: strrev(), parametro: el nombre de la cadena (variable) a la cual la invertiremos.
	
	*PASAR UNA PALABRA A MAYUSCULA: strupr(), parametro: nombre de la variable.
	
	*strncmp(): parametros, (variable, caracter, posición). Permite buscar un caracter en una posición espeficica de un arreglo.
	
	*TRANSFORMAR UNA CADENA DE CARACTERES (NUMEROS) A UN VALOR ENTERO: atoi(), parametros: variable = atoi(arreglo);
	
	*TRANSFORMAR UNA CADENA DE CARACTERES (DECIMALES) A UN VALOR FLOAT: atof(), parametros: variable = atof(arreglo);
	ATOI Y ATOF FUNCIONAN CON LA LIBRERIA #include <stdlib.h>.
	
	Name: imprimir_arreglos_y_longuitud_arreglo
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 13:50
	Description: Función que permite imprimir un arreglo de caracteres y calcular la dimension (longitud) de este*/
void imprimir_arreglos_y_longuitud_arreglo(char arreglo_1[]){
	int longitud = 0;
	printf ("%c Contenido arreglo_1: ", 175);
	cin.getline(arreglo_1, dimension_arreglo, '\n'); //Guarda en espacio de memoria un string.
	printf ("******************************************************************\n");
	longitud = strlen(arreglo_1); //Funcion que calcula el largo/dimension del arreglo de caracteres.
	printf ("%c Longitud del arreglo_1: %d y el contenido del arreglo_1 es: %s\n", 175, longitud, arreglo_1);
}

/*  Name: copiar_contenido_arreglo_1_a_2
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 15:33
	Description: Función que permite copiar el contenido de un arreglo de caracteres hacia otro arreglo del mismo tipo de dato meditante la función strcpy(). También calcula el largo de este ultimo arreglo. */
void copiar_contenido_arreglo_1_a_2(char arreglo_1[], char arreglo_2[]){
	int longitud = 0;
	strcpy(arreglo_2, arreglo_1); //Funcion que permite copiar el contenido de un arreglo a otro, viene de la libreria <string.h>.
	longitud = strlen(arreglo_2); //Funcion que calcula el largo/dimension del arreglo de caracteres.
	printf ("%c Longitud del arreglo_2: %d y el contenido del arreglo_2 es: %s\n", 175, longitud, arreglo_2);
}

/*	Name: comparar_dos_cadenas_caracteres
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 15:55
	Description: Permite comparar cadenas, si son iguales o si una es mayor a la otra alfabeticamente mediante el uso de strcmp.*/
void comparar_dos_cadenas_caracteres(char arreglo_3[], char arreglo_4[]){
	printf ("%c Contenido arreglo_3: ", 175);
	cin.getline(arreglo_3, dimension_arreglo, '\n');
	printf ("%c Contenido arreglo_4: ", 175);
	cin.getline(arreglo_4, dimension_arreglo, '\n');
	printf ("******************************************************************\n");
	if (strcmp(arreglo_3, arreglo_4) == 0){printf ("%c Los arreglos (3,4) son iguales.\n", 175);} //Si las cadenas son iguales.
	if (strcmp(arreglo_3, arreglo_4) != 0){ //Si las cadenas son diferentes.
		printf ("%c Los arreglos (3,4) son diferentes.\n", 175);
		if (strcmp(arreglo_3, arreglo_4) > 0){printf ("%c El arreglos (3) es mayor alfab%cticamente.\n", 175, 130);} //La cadena 3 es mayor alfabéticamente.
		else {printf ("%c El arreglos (4) es mayor alfab%cticamente.\n", 175, 130);} //La cadena 4 es mayor alfabéticamente.
	}
}

/*	Name: concatenar_dos_cadenas
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 15:58
	Description: Función que permite concatenar dos arreglos de caracteres mediante el uso de la funcion strcat() y también transforma los caracteres a mayúsculas y minusculas respectivamente.*/
void concatenar_dos_cadenas(char arreglo_3[], char arreglo_4[], char arreglo_5[]){
	strcpy(arreglo_5, arreglo_3); //Añadir contenido del arreglo_3 a arreglo_5.
	strcat(arreglo_5, arreglo_4); //Concatenar arreglo_4 a arreglo_5.
	printf ("%c El arreglo_5 es concatenado de (3,4): %s\n%cEste arreglo, m%cs adelante, ser%c trasnformado a may%csculas.\n", 175, arreglo_5, 175,  160, 160 ,163);
	printf ("%c El arreglo_5 transformado a may%csculas: %s\n", 175, 163, strupr(arreglo_5)); //Función que permite transformar los caracteres de un arreglo a caracteres en mayúsuculas.
	printf ("%c El arreglo_5 transformado a may%csculas: %s\n", 175, 163, strlwr(arreglo_5)); //Función que permite transformar los caracteres de un arreglo a minusculas.
}

/*	Name: invertir_una_cadena_y_transformar_arreglo_a_mayusculas_y_minusculas
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 16:09
	Description: Función que permite invertir el orden de caracteres de una cadena y transforma los caracteres este arreglo en mayúsculas y minusculas */
void invertir_una_cadena_y_transformar_arreglo_a_mayusculas_y_minusculas(char arreglo_5[]){
	printf ("%c El arreglo_5 con su contenido invertido es: %s\n", 175, strrev(arreglo_5)); //Función que permite invertir el orden de un arreglo.
	printf ("%c El arreglo_5 invertido transformado a may%csculas: %s\n", 175, 163, strupr(arreglo_5));
	printf ("%c El arreglo_5 transformado a may%csculas: %s\n", 175, 163, strlwr(arreglo_5)); //Función que permite transformar los caracteres de un arreglo a minusculas.
}

/*	Name: palindromo_palabra_verificar
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 16:10
	Description: Función que permite identificar si una palabra es palindromo o no.*/
void palindromo_palabra_verificar(char arreglo_6[], char arreglo_7[]){
	printf ("%c Contenido arreglo_6: ", 175);
	cin.getline(arreglo_6, dimension_arreglo, '\n');
	printf ("******************************************************************\n");
	strcpy(arreglo_7,arreglo_6); //Copiar contenido del arreglo_6 hacia arreglo_7.
	strrev(arreglo_7); //Invertir arreglo_7.
	if (strcmp(arreglo_6,arreglo_7) == 0){ //Comparamos ambos arreglos, es la misma palabra pero en el arreglo_7 está invertida.
		printf ("%c Es una palabra pal%cndroma: %s || %s \n", 175, 161, arreglo_6, arreglo_7);
	}
	else {
		printf ("%c El arreglo_6 no es una palabra pal%cndroma %s || %s \n", 175, 161, arreglo_6, arreglo_7);
	}
}

/*	Name: cadenas_trasformar_a_mayusculas_y_comparar_igualdad
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 16:54
	Description: Función que permite transformar dos arreglos de caracteres en mayúsculas y las comparas verificando si son palabras iguales. */
void cadenas_trasformar_a_mayusculas_y_comparar_igualdad(char arreglo_8[], char arreglo_9[]){
	printf ("%c Contenido arreglo_8: ", 175);
	cin.getline(arreglo_8, dimension_arreglo, '\n');
	printf ("%c Contenido arreglo_9: ", 175);
	cin.getline(arreglo_9, dimension_arreglo, '\n');
	printf ("******************************************************************\n");
	strupr(arreglo_8); //Pasando a mayusculas ambas palabras.
	strupr(arreglo_9);
	if (strcmp(arreglo_8, arreglo_9) == 0){
		printf ("%c Los arreglos (8,9) son iguales.\n", 175);
	}
	else {
		printf ("%c Los arreglos (8,9) son diferentes.\n", 175);
	}
}

/*	Name: ejercicio_7
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 17:01
	Description: Pedir nombre del usuario en MAYÚSCULA, si el nombre comienza por la letra a entonces convertir su nombre en a minusculas, caso contrario no convertirlo*/
void ejercicio_7(char arreglo_10[]){
	printf ("%c Contenido arreglo_10 (Tu primer nombre EN MAY%CSCULAS): ", 175, 233);
	cin.getline(arreglo_10, dimension_arreglo, '\n');
    /*if (arreglo_10[0] == 'A'){
    	strlwr(arreglo_10);
    	printf ("%c Tu nombre en minusculas: %s\n", 175, arreglo_10);
	}
	else{
		printf ("%c Tu nombre: %s\n", arreglo_10);
	} esto es correcto, pero es mejor...*/
	if (strncmp(arreglo_10,"A",1) == 0){ //Si en la primera posición del arreglo_10 se encuentra el caracter 'A' entonces:
		strlwr(arreglo_10);
		printf ("%c Tu nombre en minusculas: %s\n", 175, arreglo_10);
	} //strncmp: Funcion que permite comparar un caracter en una posición en especifico de una cadena.
	else{
		printf ("%c Tu nombre: %s\n", 175, arreglo_10);
	}
}

/*	Name: transformar_cadenas_y_sus_valores
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 17:56
	Description: Pedir al usuario dos cadenas de caracteres de numeros, uno entero y el otro real, convertirlos en sus respectivos valores y por ultimo sumarlos.*/
void transformar_cadenas_y_sus_valores(char arreglo_11[], char arreglo_12[]){
	int numero_entero = 0;
	float numero_real = 0;
	printf ("%c Contenido arreglo_11: (Valores de n%cmeros enteros): ", 175, 163); //Pedimos los numeros
	cin.getline(arreglo_11, dimension_arreglo, '\n');
	printf ("%c Contenido arreglo_12: (Valores de n%cmeros reales [Decimales]): ", 175, 163);
	cin.getline(arreglo_12, dimension_arreglo, '\n');
	numero_entero = atoi(arreglo_11); //Transformar ambos arreglos a numeros enteros y reales correspondientemente.
	numero_real = atof(arreglo_12);
	printf ("%c Los arreglos (11,12) son: %d | %.1f y la suma de sus valores es %.1f\n", 175, numero_entero, numero_real, numero_entero+numero_real);	
}

/*	Name: contador_de_vocales
	Copyright: GNU
	Author: Matías González Bilz
	Date: 04-01-23 22:53
	Description: Función que lee una cadena de caracteres de la entrada estándar y muestra en salida estándar cuántas ocurrencias de cada vocal existen en la cadena*/
void contador_de_vocales(char arreglo_12[]){
	int contador_a = 0, contador_e = 0, contador_i = 0, contador_o = 0, contador_u = 0,  contador_total_vocales = 0;
	printf ("%c Contenido arreglo_12 (Alfab%ctico): ", 175, 130);
	cin.getline(arreglo_12, dimension_arreglo, '\n'); //Ingresar palabra.
	int longitud = strlen(arreglo_12); //Servirá para calcular el largo de la palabra y definir hasta donde iterar y buscar las vocales.
	strlwr(arreglo_12); //Transformar la palabra a minuscula.
	for (int iterador = 0; iterador<longitud; iterador++){
		switch (arreglo_12[iterador]){
			case 'a':
				contador_a++;
				break;
			case 'e':
				contador_e++;
				break;
			case'i':
				contador_i++;
				break;
			case 'o':
				contador_o++;
				break;
			case 'u':
				contador_u++;
				break;
		}
	}
	contador_total_vocales = contador_a+contador_e+contador_i+contador_o+contador_u; //Suma de las vocales.
	printf ("%c Cantidad de vocales:\na:%d\ne:%d\ni:%d\no:%d\nu:%d\n%c Total de vocales:%d\n", 175, contador_a, contador_e, contador_i, contador_o, contador_u, 175, contador_total_vocales);
}

int main(int argc, char** argv) {
	char arreglo_1[dimension_arreglo], arreglo_2[dimension_arreglo], arreglo_3[dimension_arreglo], arreglo_4[dimension_arreglo], arreglo_5[dimension_arreglo], arreglo_6[dimension_arreglo], arreglo_7[dimension_arreglo]; //Arreglos/Listas de caracteres.
    char arreglo_8[dimension_arreglo], arreglo_9[dimension_arreglo], arreglo_10[dimension_arreglo], arreglo_11[dimension_arreglo], arreglo_12[dimension_arreglo], arreglo_13[dimension_arreglo];
    imprimir_arreglos_y_longuitud_arreglo(arreglo_1);
	printf ("******************************************************************\n");
	copiar_contenido_arreglo_1_a_2 (arreglo_1, arreglo_2);
	printf ("******************************************************************\n");
	comparar_dos_cadenas_caracteres (arreglo_3, arreglo_4);
	printf ("******************************************************************\n");
	concatenar_dos_cadenas(arreglo_3, arreglo_4, arreglo_5);
	printf ("******************************************************************\n");
	invertir_una_cadena_y_transformar_arreglo_a_mayusculas_y_minusculas(arreglo_5);
	printf ("******************************************************************\n");
	palindromo_palabra_verificar(arreglo_6, arreglo_7);
	printf ("******************************************************************\n");
	cadenas_trasformar_a_mayusculas_y_comparar_igualdad(arreglo_8, arreglo_9);
	printf ("******************************************************************\n");
	ejercicio_7(arreglo_10);
	printf ("******************************************************************\n");
	transformar_cadenas_y_sus_valores(arreglo_11, arreglo_12);
	printf ("******************************************************************\n");
	contador_de_vocales(arreglo_12);
	printf ("******************************************************************\n");
	getch();
	
	return 0;
}
