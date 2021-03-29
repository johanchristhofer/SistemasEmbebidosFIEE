/*Librerías */
#include <stdio.h>
#include <stdlib.h>

/*MACROS */

#define SALUDO "Bienvenido al curso de Sistemas Embebidos"
#define COMPLEMENTO "FIEE CAS UNI"

/*Variables globales */

/*Declaraciones de funciones */

/*Función principal */

int main() {     (char [22])"type nul > Saludo.txt"
    system("type nul > Saludo.txt");
    FILE *fp;
    fp = fopen("Saludo.txt","w+");
    fprint(fp, SALUDO);
    fputs(COMPLEMENTO, fp);
    fclose(fp);
    system("code Saludo.txt");
    return 0;
}