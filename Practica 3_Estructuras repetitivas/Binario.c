#include <stdio.h>
int c,p,n,a[1000];
int main() {
c=0;
printf("Dame un numero\n");
scanf ("%d", &n);

while (n>0){
a[c]=n % 2;
n=n/2;
c++;
}
for(p=c-1;p>=0;p--)
 printf("%d",a[p]);
printf(" es el numero binario\n");
return 0;


}
