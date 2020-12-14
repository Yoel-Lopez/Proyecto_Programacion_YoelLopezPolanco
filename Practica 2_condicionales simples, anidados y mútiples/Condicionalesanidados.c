#include <stdio.h>
#include <math.h>

float dinero,impuesto,imp1,imp2,imp3,imp4;
char s,c [2];
char civil;

int main (){
 printf("Indique el estado civil\n***s=soltero, c=casado \n");
scanf ("%s",&civil);
printf ("Dame tus ganacias\n");
scanf ("%f",&dinero);

if (civil=='s'){
   if(dinero<32000){
  imp1=dinero*.10;
  printf("El impuesto es: %f",imp1);
  }
  else if (dinero>32000) {
  imp2=dinero*.25;
  printf("El impuesto es: %f",imp2);
  }
  }
else  if(civil=='c'){
  if (dinero<64000){
  imp3=dinero*.10;
  printf("El impuesto es: %f",imp3);
  }
  else if (dinero>6400){
    imp4=dinero*.25;
    printf("El impuesto es: %f",imp4);
  }
 }
}
