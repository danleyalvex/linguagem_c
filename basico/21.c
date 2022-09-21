// Dado um número inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os três algarismos do número dado são diferentes de zero. Utilize os operadores / e %.

#include <stdio.h>

void main() {
  int n;

  printf("Informe um nro inteiro: ");
  scanf("%d", &n);

  int digito1 = (n / 100);
  int digito2 = (n % 100) / 10;
  int digito3 = (n % 100) % 10;

  printf("\nNro inteiro invertido.: %1d%1d%1d", digito3, digito2, digito1);
}