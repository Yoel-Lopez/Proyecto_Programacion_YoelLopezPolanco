#include <stdio.h>
#include <math.h>
float Funcion1(float x_in),Funcion2(float x_in),ErrorRelativo(float va,float vn);
float bise(float a, float b), Falsa1(float a, float b), Falsa2(float a, float b);
float va, vn, a,b;
int i, iteraciones, metodo;
int main() {
  printf("Cual metodo desea utilizar\n");
  printf("1. Biseccion         2. FalsaPosicion\n");
  scanf("%d",&metodo);
  switch (metodo) {
    case 1:
    printf("Cuantas interaciones para las funciones\n");
    scanf("%d",&iteraciones);
    printf("\n");
    a=-3;
    b=-2;
    vn=0;
    va=0;
    printf("   i          Xi           a           b             E\n");
    for(i=1; i<=iteraciones; i++){
      printf("%d         %f    %f   %f     %f\n",i,bise(a,b),a,b,ErrorRelativo(va,vn));
      if ((Funcion1(a)*Funcion1(bise(a,b)))<0) {
        b=bise(a,b);
        va=b;
        vn=bise(a,va);
      }
      else{
        a=bise(a,b);
        va=a;
        vn=bise(va,b);
      }
      }
    printf("\n");
    printf("\n");
    a=1;
    b=2;
    vn=0;
    va=0;
    printf("   i          Xi          a         b            E\n");
    for(i=1; i<=iteraciones; i++){
      printf("%d         %f    %f   %f     %f\n",i,bise(a,b),a,b,ErrorRelativo(va,vn));
      if ((Funcion2(a)*Funcion2(bise(a,b)))<0) {
        b=bise(a,b);
        va=b;
        vn=bise(a,va);
      }
      else{
        a=bise(a,b);
        va=a;
        vn=bise(va,b);
      }
      }
    break;
    case 2:
    printf("Cuantas interaciones para las funciones\n");
    scanf("%d",&iteraciones);
    printf("\n");
    a=-3;
    b=-2;
    vn=0;
    va=0;
    printf("   i          Xi           a           b             E\n");
    for(i=1; i<=iteraciones; i++){
      printf("%d         %f    %f   %f     %f\n",i,Falsa1(a,b),a,b,ErrorRelativo(va,vn));
      if ((Funcion1(a)*Funcion1(Falsa1(a,b)))<0) {
        b=Falsa1(a,b);
        va=b;
        vn=Falsa1(a,va);
      }
      else{
        a=Falsa1(a,b);
        va=a;
        vn=Falsa1(va,b);
      }
      }
    printf("\n");
    printf("\n");
    a=1;
    b=2;
    vn=0;
    va=0;
    printf("   i          Xi          a         b            E\n");
    for(i=1; i<=iteraciones; i++){
      printf("%d         %f    %f   %f     %f\n",i,Falsa2(a,b),a,b,ErrorRelativo(va,vn));
      if ((Funcion2(a)*Funcion2(Falsa2(a,b)))<0) {
        b=Falsa2(a,b);
        va=b;
        vn=Falsa2(a,va);
      }
      else{
        a=Falsa2(a,b);
        va=a;
        vn=Falsa2(va,b);
      }
      }
    break;
  }
  }
float Funcion1(float x_in){
  float fx;
  fx = (2*(x_in)*cos(2*x_in))-pow((x_in+1),2);
  return fx;
}
float bise(float a, float b){
  float xi;
  xi = ((a+b)/2);
  return xi;
}
float Funcion2(float x_in){
  float fx;
  fx = log(fabs(x_in))+pow(x_in,2)-4;
  return fx;
}
float ErrorRelativo(float va,float vn){
  float epsilon;
  epsilon = fabs((vn-va)/vn)*100;
  return epsilon;
}
float Falsa1(float a, float b){
  float xi;
  xi = b-((Funcion1(b)*(a-b))/(Funcion1(a)-Funcion1(b)));
  return xi;
}
float Falsa2(float a, float b){
  float xi;
  xi = b-((Funcion2(b)*(a-b))/(Funcion2(a)-Funcion2(b)));
  return xi;
}
