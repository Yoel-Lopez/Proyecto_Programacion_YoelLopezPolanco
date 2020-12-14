#include <stdio.h>
#include <math.h>
#define PI 3.1415926
float r;
float v;
int main() {

printf ("Dame el radio\n ");
scanf ("%f",&r);
v = (4 *PI* pow(r,3))/3;
printf (" El volumen es= %2.2f\n cm ",v);
return 0;
}
