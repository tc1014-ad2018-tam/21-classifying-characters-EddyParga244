/*
 * Este programa fue realizado como la tarea#21 el 17 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es clasificar cada caracter que hay en un string en
 * vocales, consonantes, digitos, espacios y caracteres especiales.
 *
 * Fecha: 17 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    //Declaracion de variables
    char cadena[100];
  char c;
  int i=0;

  //Se le pide al usuario que escriba un texto
  printf("Escribe un texto: ");
  fgets(cadena, sizeof(cadena),stdin); //Se lee el texto

  //Mientras que cada caracter de la cadena sea diferente del caracter nulo(\0)...
  while (cadena[i]!='\0'){
    if(isalpha(cadena[i])){ //Se analiza si el caracter es una letra
      c=(char)toupper(cadena[i]); //Se hace la convercion de minusculas a mauysculas
      if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("El caracter %c es una vocal.\n", cadena[i]); //Se imprime este mensaje si es una vocal
      }
      else {
        printf("El caracter %c es una consonante.\n", cadena[i]); //Se imprime este mensaje si es una consonante
      }
      
    } 
    else {
      if(isdigit(cadena[i])){ //Se analiza si el caracter es un digito y se imprime el mensaje
        printf("El caracter %c es un digito.\n", cadena[i]);
      } 
      else {
        if(isspace(cadena[i])){ //Se analiza si el caracter es un espacio y se imprime el mensaje
          printf("El caracter %c es un espacio.\n", cadena[i]);
        } 
        else{ //Se analiza si el caracter es un caracter especial y se imprime el mensaje
            printf("El caracter %c es un caracter especial.\n", cadena[i]);
        }
    }
   } //Al terminar de clasificar un caracter, va al siguiente.
    ++i;
  }
  
  return 0;
}