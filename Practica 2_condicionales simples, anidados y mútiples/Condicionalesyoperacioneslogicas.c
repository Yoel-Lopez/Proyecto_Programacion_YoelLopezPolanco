#include <stdio.h>
#include <math.h>
float peso,estatura,imc;

int main(){
  printf("Dame tu peso\n");
  scanf("%f",&peso);
  printf("Dame tu estaura en m\n");
  scanf("%f",&estatura);
  imc = peso/ (pow(estatura,2));
  printf("Indice de masa corporal: %2.2f\n",imc);

  if (imc<18.5){printf("Peso bajo\n");}
  if (imc>=18.5 && imc<=24.9){printf("Peso normal\n");}
  if (imc>=25 && imc<=29.9){printf("Sobrepeso\n");}
  if (imc>=30 && imc<=34.9){printf("Obesidad tipo 1\n");}
  if (imc>=35 && imc<=39.9){printf("Obesidad tipo 2\n");}
  else if (imc>40){printf("Hiper obesidad\n");}
   }
