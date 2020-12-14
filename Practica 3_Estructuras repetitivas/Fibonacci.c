#include "stdio.h"
double n,j,a=0,b=1,c=1,aureo;
int main (){
 printf ("Dame el numero de iteraciones\n");
scanf("%lf",&n);
printf("1,  ");
for (j=1;j<n;j++){
  c=a+b;
  a=b;
  b=c;

 printf("%1.0lf , ",c);
 }
 aureo=c/a;
 printf("Aureo es: %lf\n  ",aureo);
 return 0;
  }
