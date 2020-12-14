#include <stdio.h>
int bolsas;
float  m, des, tarifafinal,ocupas;
char depar;
int main() {
  printf("a)Perfumeria  b)salchichoneria  c) carmiceria  d)limpieza\n");
  printf("dime el departamento en donde compro\n");
  scanf("%s",&depar);
  printf("Cual es el monto de su compra?\n");
  scanf("%f",&m);
  printf("Dime numero de bolsas utilizadas\n");
  scanf("%d",&bolsas);
  switch (depar) {
    case 'a':
    des = m * 0.2;
    ocupas = bolsas * 0.1;
    tarifafinal = m - des + ocupas;
    printf("El total de compra es %0.2f\n",tarifafinal);
    break;
    case 'b':
   des = m * 0.4;
    ocupas = bolsas * 0.1;
    tarifafinal = m - des + ocupas;
    printf("El total de compra es %0.2f\n",tarifafinal);
    break;
    case 'c':
    des = m * 0.2;
    ocupas = bolsas * 0.1;
    tarifafinal = m - des + ocupas;
    printf("El total de compra es %0.2f\n",tarifafinal);
    break;
    case 'd':
    des = m * 0.35;
    ocupas = bolsas * 0.1;
    tarifafinal = m - des + ocupas;
    printf("El total de compra es %0.2f\n",tarifafinal);
    break;
    default:
    printf("No esta bien la seleccion departamento\n");
    break;
  }
  return 0;
}
