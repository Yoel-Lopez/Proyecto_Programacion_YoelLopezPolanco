#include <stdio.h>
#include <math.h>

float a, b, c,x1,x2, resultado;

int main(){
printf ("Dame a\n");
scanf("%f",&a);
printf ("Dame b\n");
scanf("%f",&b);
printf ("Dame c\n");
scanf("%f",&c);
resultado= ((b*b)-(4*a*c));
if (resultado<=0){
  printf("Error: las soluciones no son reales\n");
  }
else {
x1= (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
x2= (-b-(sqrt((b*b)-(4*a*c))))/(2*a);
printf ("x1: %f\n ",x1);
printf ("x2: %f\n ",x2);
}
}
