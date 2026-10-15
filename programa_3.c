#include <stdio.h>
int main ()
{
  int num;
printf("Ingrese un numero:\n");
scanf("%d", &num);
if(num%2 == 0)
  printf("El numero %d es par.\n", num);
else
printf("El número %d es impar.\n",num);
return 0;
}
