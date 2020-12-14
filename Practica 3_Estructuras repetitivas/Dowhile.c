#include<stdio.h>
int x,y,u,d,c,a,m,t;
int main (){
do{
  printf("Dame 4 cifras de numeros no repetidos\n");
  scanf("%d",&x);
  u=x%10;

    y=x-u;
    y=y%100;
    d=y/10;

    a=x-d-u;
    a=a%1000;
    c=a/100;

    t=x-c-d-u;
    m=t/1000;

}
while(x<999 && x>10000);
if (d!=u && d!=m && u!=m && u!=c && c!=d && c!=m){
    printf("codigo valido\n");
    printf("\n");
}

else{
printf("codigo no valido\n");
    return 0;
}
}
