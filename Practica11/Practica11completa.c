#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}};
float B[3] = {27,-61.5,-21.5};
float x_inicial1,x_inicial2,x_inicial3;
float x_iteracion_1,x_iteracion_2,x_iteracion_3;
float x1,x2,x3;
float ErrorRelativo(float a, float b);
int i,j,metodo;
int main(){
  printf("Cual metodo desea utilizar\n");
  printf("1. Jacobi       2. Gauss Seidel\n");
  scanf("%d",&metodo);
  switch (metodo) {
    case 1:
    printf("Metodo de Gaus Seidel\n");
    for(j=0;j<5;j++){
        if(j==0){
            x_iteracion_1 = B[0]/A[0][0];
            x1=x_iteracion_1;
            x_iteracion_2 = ((-A[1][0]*x_iteracion_1)+B[1])/A[1][1];
            x2=x_iteracion_2;
            x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+B[2])/A[2][2];
            x3=x_iteracion_3;
            printf("X      Iteracion       Valor        Error relativo \n");
            printf("-----------------------------------------------------\n");
            printf("x_1       1           %f            \n",x_iteracion_1);
            printf("x_2       1           %f            \n",x_iteracion_2);
            printf("x_3       1          %f             \n",x_iteracion_3);
            printf("-----------------------------------------------------\n");
        }

        else {

            x_iteracion_1 = ((-A[0][1]*x_iteracion_2)-(A[0][2]*x_iteracion_3)+B[0])/A[0][0];
            printf("x_1       %d           %f          %f\n",j+1,x_iteracion_1,ErrorRelativo(x_iteracion_1,x1));
            x1=x_iteracion_1;
            x_iteracion_2 = ((-A[1][0]*x_iteracion_1)-(A[1][2]*x_iteracion_3)+B[1])/A[1][1];
            printf("x_2       %d           %f          %f\n",j+1,x_iteracion_2,ErrorRelativo(x_iteracion_2,x2));
            x2=x_iteracion_2;
            x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+B[2])/A[2][2];
            printf("x_3       %d          %f          %f\n",j+1,x_iteracion_3,ErrorRelativo(x_iteracion_3,x3));
            x3=x_iteracion_3;
            printf("-----------------------------------------------------\n");
            }
        }
      break;
      case 2:
      printf("Metodo de Jacobi \n");
      for(j=0;j<5;j++){
          if(j==0){
              x_iteracion_1 = B[0]/A[0][0];
              x1=x_iteracion_1;
              x_iteracion_2 = B[1]/A[1][1];
              x2=x_iteracion_2;
              x_iteracion_3 = B[2]/A[2][2];
              x3=x_iteracion_3;
              printf("X      Iteracion       Valor        Error relativo \n");
              printf("-----------------------------------------------------\n");
              printf("x_1       1           %f            \n",x_iteracion_1);
              printf("x_2       1           %f            \n",x_iteracion_2);
              printf("x_3       1          %f             \n",x_iteracion_3);
              printf("-----------------------------------------------------\n");
          }

          else {

              x_iteracion_1 = ((-A[0][1]*x2)-(A[0][2]*x3)+B[0])/A[0][0];
              printf("x_1       %d           %f          %f\n",j+1,x_iteracion_1,ErrorRelativo(x_iteracion_1,x1));
              x_iteracion_2 = ((-A[1][0]*x1)-(A[1][2]*x3)+B[1])/A[1][1];
              printf("x_2       %d           %f          %f\n",j+1,x_iteracion_2,ErrorRelativo(x_iteracion_2,x2));
              x_iteracion_3 = ((-A[2][0]*x1)-(A[2][1]*x2)+B[2])/A[2][2];
              printf("x_3       %d          %f          %f\n",j+1,x_iteracion_3,ErrorRelativo(x_iteracion_3,x3));
              x1=x_iteracion_1;
              x2=x_iteracion_2;
              x3=x_iteracion_3;
              printf("-----------------------------------------------------\n");
              }
          }
        }
      float ErrorRelativo(float a, float b){
        float ErrorRelativo;
        ErrorRelativo = fabs((a-b)/a)*100;
        return ErrorRelativo;
        }
}
