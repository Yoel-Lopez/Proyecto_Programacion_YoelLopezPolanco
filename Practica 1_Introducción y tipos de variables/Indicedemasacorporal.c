#include <stdio.h>
#include <math.h>
char nombre [99];
float peso;
float estatura;
int edad;
float imc;

int main() {
  printf("Dame tu nombre\n");
  scanf("%s",&nombre);
  printf("Dame tu edad\n");
  scanf("%d",&edad);
  printf("Dame tu peso\n");
  scanf("%f",&peso);
  printf("Dame tu estaura en m\n");
  scanf("%f",&estatura);
  imc = peso/ (pow(estatura,2));

 printf("Nombre: %s\n",nombre);
 printf("Edad: %d\n",edad);
 printf("Peso: %2.2f\n",peso);
 printf("Indice de masa corporal: %2.2f\n",imc);
 }
