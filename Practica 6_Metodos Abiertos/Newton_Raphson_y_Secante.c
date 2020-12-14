#include<stdio.h>
#include <math.h>
float f1x(float x_in);
float df1x(float x_in);
float errorRelativo(float vn,float va);
float f2x(float x_in);
float f2x1 (float x_in);
float errorRelativo2(float vn,float va);
float f3x(float x_in);
float df3x1(float x_in);
float errorRelativo3(float vn,float va);
float f4x(float x_in);
float errorRelativo4(float vn,float va);
float i, xi, xip2,xip1, x0,va,vn,x1;
int ite,metodo;
int main(){
  printf("Cual metodo desea utilizar\n");
  printf("1. Newton-Raphson        2. secante\n");
  scanf("%d",&metodo);
switch (metodo) {
  case 1:
  va=0;
  vn=0;
  x0=0.3;
  printf ("Este es el metodo de newton-Raphson\n");
  printf ("Dame el numero de iteracciones\n");
  scanf ("%d",&ite);
  printf("i               xi           e\n ");
  for(i=1; i<=ite; i++){
  xip1=x0-(f1x(x0))/df1x(x0);
  va=xip1;
  vn=x0;
    printf("%3.0f       %3.5f        %3.5f\n",i,xip1,errorRelativo(va,vn));
    xip1=x0-(f1x(x0))/df1x(x0);
    x0=xip1;
    va=xip1;
    vn=x0;
}
printf("\n");
printf("\n");
va=0;
vn=0;
x0=0.3;
  printf("i               xi           e\n ");
  for(i=1; i<=ite; i++){
  xip1=x0-(f3x(x0))/df3x1(x0);
  va=xip1;
  vn=x0;
    printf("%3.0f       %3.5f        %3.5f\n",i,xip1,errorRelativo3(va,vn));
    xip1=x0-(f3x(x0))/df3x1(x0);
    x0=xip1;
    va=xip1;
    vn=x0;

}
  break;
  case 2:
  va=0;
  vn=0;
  x0=0.5;
  x1=0.3;
  printf ("Este es el metodo de la secante\n");
  printf ("Dame el numero de iteracciones\n");
  scanf ("%d",&ite);
  printf("   i         xi            xi+1          e\n ");
  for(i=1; i<=ite; i++){
  xip2=x1-(f2x(x1)*(x0-x1))/(f2x(x0)-f2x(x1));
  va=xip2;
  vn=x1;
  printf("%3.0f       %3.5f        %3.5f   %3.5f \n",i,xip2,x1,errorRelativo2(va,vn));
  xip2=x1-(f2x(x1)*(x0-x1))/(f2x(x0)-f2x(x1));
  x0=x1;
  x1=xip2;
  va=xip2;
  vn=x0;
}
printf("\n");
printf("\n");
x0=3;
x1=-4;
printf("    i     xi          xi+1            e    \n ");
for(i=1; i<=ite; i++){
xip2=x1-(f4x(x1)*(x0-x1))/(f4x(x0)-f4x(x1));
va=xip2;
vn=x1;
printf("%3.0f   %3.4f        %3.4f       %3.4f     \n",i,xip2,x1,errorRelativo4(va,vn));
xip2=x1-(f4x(x1)*(x0-x1))/(f4x(x0)-f4x(x1));
x0=x1;
x1=xip2;
va=xip2;
vn=x0;
}
break;
}
}
float f1x(float x_in){
  float f1xx;
  f1xx=(8*sin(x_in)*exp(-x_in))-1;
  return f1xx;
}
float df1x(float x_in){
  float f1xx;
  f1xx= (8*exp(-x_in)*cos(x_in))-(8*exp(-x_in)*sin(x_in));
  return f1xx;
}
float errorRelativo (float va,float vn){
  float epsilon;
  epsilon=fabs((va-vn)/va)*100;
  return epsilon;
}
float f3x(float x_in){
  float f3xx;
  f3xx= (2*(pow(x_in,3))-11*(pow(x_in,2))+17.7*(x_in)-5);
  return f3xx;
}
float df3x1(float x_in){
  float f3xx;
  f3xx= (6*(pow(x_in,2))-22*(x_in)+17.7);
  return f3xx;
}
float errorRelativo3(float va,float vn){
  float epsilon;
  epsilon=fabs((va-vn)/va)*100;
  return epsilon;
}
float f2x(float x_in){
  float f2xx;
  f2xx=(8*sin(x_in)*exp(-x_in))-1;
  return f2xx;
}
float errorRelativo2(float va,float vn){
  float epsilon;
  epsilon=fabs((va-vn)/va)*100;
  return epsilon;
}
float f4x(float x_in){
  float f4xx;
  f4xx= (2*(pow(x_in,3))-11*(pow(x_in,2))+17.7*(x_in)-5);
  return f4xx;
}
float errorRelativo4(float va,float vn){
  float epsilon;
  epsilon=fabs((va-vn)/va)*100;
  return epsilon;
}
