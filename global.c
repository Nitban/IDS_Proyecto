#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para el registro de peliculas
struct peliculas_lista {
  char nombre[100];
  char genero[100];
  char duracion[100];
  int calificacion;
  char director[100];
};
struct peliculas_lista pelicula[11];

// // Funcion para agregar peliculas
int agregar(int lugar) {
   printf("Ingresa el nombre de la pelicula\n");
   scanf("%s", &pelicula[lugar].nombre);
   printf("\nIngresa el genero de la pelicula\n");
   scanf("%s", &pelicula[lugar].genero);
   printf("\nIngresa la duracion de la pelicula\n");
   scanf("%s", &pelicula[lugar].duracion);
   printf("\nIngresa una calificacion del 1 al 10\n");
   scanf("%d", &pelicula[lugar].calificacion);
   printf("\nIngresa el nombre del director de la pelicula\n");
   scanf("%s", &pelicula[lugar].director);
   printf("\nPelicula registrada con exito\n");
   return 0;
 }

int main() {
  
}