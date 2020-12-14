#include <stdio.h>
#include <math.h>
float Adelante(float h, float xi), Atras(float h, float xi), Central(float h, float xi),ErrorRelativo(float DeriNumerica);
float h,xi,DeriNumerica,fxi,fxip1,fxip2,fxip3,fxip4;
int main() {
  printf("     h   |   Diferenciacion    |      f'(x)       | ErrorRelativo      \n");
  printf("  ----------------------------------------------------------------");
  h=0.5; xi=0.6;
  printf("\n");
  printf("    0.5  |    Adelante         |  %f        |  %f   \n", Adelante(h,xi),ErrorRelativo(Adelante(h,xi)));
  printf("    0.5  |     Atras           |  %f       | %f    \n",Atras(h,xi),ErrorRelativo(Atras(h,xi)));
  printf("    0.5  |    Central          |  %f       | %f     \n", Central(h,xi),ErrorRelativo(Central(h,xi)));
  printf("  ----------------------------------------------------------------");

  h=0.2;xi=0.6;
  printf("\n");
  printf("    0.2  |    Adelante         | %f         |  %f   \n", Adelante(h,xi),ErrorRelativo(Adelante(h,xi)));
  printf("    0.2  |     Atras           | %f         | %f   \n",Atras(h,xi),ErrorRelativo(Atras(h,xi)));
  printf("    0.2  |    Central          | %f         |   %f   \n", Central(h,xi),ErrorRelativo(Central(h,xi)));
  printf("  ----------------------------------------------------------------");

  h=0.1;xi=0.6;
  printf("\n");
  printf("    0.1  |    Adelante         |  %f        |  %f  \n", Adelante(h,xi),ErrorRelativo(Adelante(h,xi)));
  printf("    0.1  |    Atras            |  %f        | %f   \n",Atras(h,xi),ErrorRelativo(Atras(h,xi)));
  printf("    0.1  |    Central          |  %f        |  %f \n", Central(h,xi),ErrorRelativo(Central(h,xi)));
  printf("  ----------------------------------------------------------------");

  h=0.01;xi=0.6;
  printf("\n");
  printf("    0.01 |    Adelante         |  %f        |  %f   \n", Adelante(h,xi),ErrorRelativo(Adelante(h,xi)));
  printf("    0.01 |     Atras           |  %f        |  %f   \n",Atras(h,xi),ErrorRelativo(Atras(h,xi)));
  printf("    0.01 |    Central          |  %f        | %f    \n", Central(h,xi),ErrorRelativo(Central(h,xi)));
  printf("  ----------------------------------------------------------------\n");
  return 0;
}
float Adelante(float h, float xi){
  fxi = 1-exp(-xi/0.2);
  fxip1 = 1-exp(-(xi+h)/0.2);
  fxip2 = 1-exp(-(xi+2*h)/0.2);
  DeriNumerica = (-fxip2+4*fxip1-3*fxi)/(2*h);
  return DeriNumerica;
}
float Atras(float h, float xi){
  fxi = 1-exp(-xi/0.2);
  fxip1 = 1-exp(-(xi-h)/0.2);
  fxip2 = 1-exp(-(xi-2*h)/0.2);
  DeriNumerica = (3*fxi-4*fxip1+fxip2)/(2*h);
  return DeriNumerica;
}
float Central(float h, float xi){
  fxip1 = 1-exp(-(xi+h)/0.2);
  fxip2 = 1-exp(-(xi+2*h)/0.2);
  fxip3 = 1-exp(-(xi-h)/0.2);
  fxip4 = 1-exp(-(xi-2*h)/0.2);
  DeriNumerica = (-fxip2+8*fxip1-8*fxip3+fxip4)/(12*h);
  return DeriNumerica;
}
float ErrorRelativo(float DeriNumerica){
  float ErrorRelativo;
  ErrorRelativo = fabs((DeriNumerica-0.24893)/DeriNumerica)*100;
  return ErrorRelativo;
}
