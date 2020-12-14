#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int datosarreglos (int *arreglo, int t);
int datosimpresion (int*arreglo,int t);
int datosaleatorio(int *arreglo, int t);
int impresionale(int *arreglo, int t);
int sumarreglos (int *arreglo, int t);
int suma_unarreglo(int*arreglo,int t);
int datosmatriz(int arre[][100], int f, int c);
int matriz(int arre[][100], int f, int c);
int Lmatriz(int arre[][100], int f, int columnas);
int datoa(int arre[][100], int f1, int c1);
int datob(int arra[][100], int f2, int c2);
int sumadosmatrices(int arrb[][100], int f1, int c1);
int m(int arrb[][100], int f1, int c1);
int arre[100][100],arra[100][100],arrb[100][100];
int problema,j,t,i,f,c,f1,c1,f2,c2;
int suma=0;
int arreglo1[100], arreglo2[100], arreglo3 [100],arreglo4[100];
int main(){
  printf ("Cual problema?\n");
  scanf("%d",&problema);
switch (problema){
  case 1:
  printf("Dame el tamano de los arreglos\n");
  scanf("%d",&t);
  printf("Dame los numeros del arreglo 1 (%d): \n",t);
  datosarreglos (arreglo1,t);
  printf("Dame los numeros del arreglo 2 (%d): \n",t);
  datosarreglos (arreglo2,t);
  printf("Arreglo 1: \n");
  datosimpresion (arreglo1,t);
  printf("Arreglo 2: \n");
  datosimpresion (arreglo2,t);
  break;
  case 2:
  printf("Dame el tamano de los arreglos\n");
  scanf("%d",&t);
  printf("Arreglo 1: \n");
  impresionale(arreglo1,t);
  printf("Arreglo 2: \n");
  impresionale(arreglo2,t);
  break;
  case 3:
  printf("Dame el tamano de los arreglos\n");
  scanf("%d",&t);
  printf("Dame los numeros del arreglo 1 (%d): \n",t);
  datosarreglos (arreglo1,t);
  printf("Dame los numeros del arreglo 2 (%d): \n",t);
  datosarreglos (arreglo2,t);
  printf ("La suma de los arreglos vectoriales es: \n");
  sumarreglos (arreglo3,t);
  break;
  case 4:
  printf("Dame el tamano de los arreglos\n");
  scanf("%d",&t);
  printf("Dame los numeros del arreglo 1 (%d): \n",t);
  datosarreglos (arreglo1,t);
  printf ("La suma del arreglo  es :  ");
  suma_unarreglo (arreglo4,t);
  printf("\n");
  break;
  case 5:
  printf("Dime el numero de filas\n");
  scanf("%d",&f);
  printf("dime el numero de columnas\n");
  scanf("%d",&c);
  datosmatriz(arre,f,c);
  printf("\n" );
  printf("Asi queda matriz\n");
  matriz(arre,f,c);
  printf("\n");
  break;
  case 6:
  printf("Dime el numero de filas\n");
  scanf("%d",&f);
  printf("Dime el numero de columnas\n");
  scanf("%d",&c);
  Lmatriz(arre,f,c);
  printf("\n");
 break;
 case 7:
 printf("Dame el numero de filas de la matriz 1\n");
 scanf("%d",&f1);
 printf("Dame el numero de columnas de la matriz 1\n");
 scanf("%d",&c1);

 printf("Dame el numero de filas de la matriz 2\n");
 scanf("%d",&f2);
 printf("Dame el numero de columnas de la matriz 2\n");
 scanf("%d",&c2);
 if (f1==f2 && c1==c2) {
   printf(" Matriz 1\n");
   datoa(arre,f1,c1);
   printf("Matriz 2\n");
   datob(arrb,f2,c2);
   printf(" Al sumar las matrices quedo: \n");
   sumadosmatrices(arrb,f1,c1);
   printf("\n");
 } else {
   printf("Mal los datos\n");
}
break;
case 8:
printf("Dame el numero de filas de la matriz 1\n");
scanf("%d",&f1);
printf("Dame el numero de columnas de la matriz 1\n");
scanf("%d",&c1);

printf("Dame el numero de filas de la matriz 2\n");
scanf("%d",&f2);
printf("Dame el numero de columnas de la matriz 2\n");
scanf("%d",&c2);
if (f1==c2) {
  printf(" Matriz 1\n");
  datoa(arre,f1,c1);
  printf("Matriz 2\n");
  datob(arra,f2,c2);
  printf(" Al multiplicar quedo: \n");
  m(arrb,f1,c1);
  printf("\n");
} else {
  printf("Mal los datos\n");
}
break;
}
return 0;
}
int datosarreglos (int*arreglo,int t){
  for (j=1;j<=t;j++){
   printf ("numero [%d] ",j);
   scanf ("%d",&arreglo[j]);
}
   printf("\n");
}
int datosimpresion (int*arreglo,int t){
  for (j=1;j<=t;j++){
    printf("posicion [%d] %d\n",j,arreglo [j]);
  }
  }
  int datosaleatorio(int *arreglo, int t){
    int j;
    for(j=1; j<=t; j++){
    arreglo[j]=1+rand()%100;
    }
  }
  int impresionale(int *arreglo, int t){
    int j;
    for(j=1; j<=t; j++){
    datosaleatorio(arreglo,t);
    printf("posicion [%d]: %d\n",j,arreglo[j]);
    }
  }
  int sumarreglos (int*arreglo,int t){
    for (j=1;j<=t;j++){
    arreglo[j]=arreglo1[j]+arreglo2[j];
     printf ("La suma es[%d]:%d\n",j,arreglo[j]);
   }
  }
  int suma_unarreglo(int*arreglo,int t){
  for (i=1; i<=t ;i++){
    suma=suma+arreglo1[i];

  }
    printf("%d",suma);
  }
  int datosmatriz(int arre[][100], int f, int c){
    for(i=1; i<=f; i++)
      for(j=1; j<=c; j++){
      printf("Orden [%d][%d] => ",i,j);
      scanf("%d",&arre[i][j]);
    }
  }
  int matriz (int arre[][100], int f, int c){
    for(i=1; i<=f; i++){
      printf("\n");
      for(j=1; j<=c; j++)
      printf(" %d",arre[i][j]);
      printf("\n");
    }
  }
  int Lmatriz(int arre[][100], int f, int c){
    for(i=1; i<=f; i++){
      printf("\n");
      for(j=1; j<=c; j++){
      arre[i][j]=1+rand()%100;
      printf(" %d",arre[i][j]);
    }
  }
  }
  int datoa(int arre[][100], int f1, int c1){
    for(i=1; i<=f1; i++)
      for(j=1; j<=c1; j++){
      printf("Orden [%d][%d] => ",i,j);
      scanf("%d",&arre[i][j]);
    }
  }
  int datob(int arra[][100], int f2, int c2){
    for(i=1; i<=f2; i++)
      for(j=1; j<=c2; j++){
      printf("Orden [%d][%d] => ",i,j);
      scanf("%d",&arra[i][j]);
    }
  }
  int sumadosmatrices(int arrb[][100], int f1, int c1){
    for(i=1; i<=f1; i++)
    for(j=1; j<=c1; j++)
    arrb[i][j]=arre[i][j]+arrb[i][j];
    for(i=1; i<=f1; i++){
      printf("\n");
      for(j=1; j<=c2; j++)
      printf(" %d", arrb[i][j]);
      printf ("\n");
    }
  }
  int m(int arrb[][100], int f1, int c1){
    int i,j,acumulador,contador;
    for(i=1; i<=f1; i++)
    for(j=1; j<=c1; j++){
    for(acumulador=0, contador=0; contador<=c1; contador++)
    acumulador=acumulador+arre[i][contador]*arra[contador][j];
    arrb[i][j]=acumulador;
  }
  for(i=1; i<=f1;i++){
    printf("\n");
  for(j=1; j<=f2;j++)
  printf("  %d",arrb[i][j]);
  }
}
