#include <stdio.h>
#include <math.h>
#define G 9.8
float m;
float w;
int main() {
 printf ("Dame la masa\n ");
 scanf ("%f",&m);
 w= m*G;
printf ("La fuerza de atraccion es: %2.2f\n",w);
 }
