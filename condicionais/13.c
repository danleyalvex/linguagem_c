// 13. Construa um algoritmo que leia três valores inteiros e os coloque em ordem crescente.

#include <stdio.h>

int main () {
    int a,b,c;

    printf("Digite os valores de A, B e C: ");
    scanf("%d%d%d", &a,&b,&c);

      printf("\nValores em ordem crescente (do menor para o maior)\n");
  if ((a < b) && (b < c))
     printf("%d - %d - %d", a, b, c);
  else if ((a < c) && (c < b))
	  printf("%d - %d - %d", a, c, b);
       else if ((b < a) && (a < c))
	       printf("%d - %d - %d", b, a, c);
	    else if ((b < c) && (c < a))
		    printf("%d - %d - %d", b, c, a);
		 else if ((c < a) && (a < b))
			 printf("%d - %d - %d", c, a, b);
		      else
		         printf("%d - %d - %d", c, b, a);
    
}