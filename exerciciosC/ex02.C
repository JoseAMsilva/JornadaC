#include <stdio.h>

int main()
{
   float l;
   float area, perimetro;
   printf("Insira o valor do lado do quadrado:\n");
   scanf("%f", & l);
   area = l * l;
   perimetro = 4.0 * l;
   printf("A area é de %f e o perimetro de %f", area, perimetro);
   
   return 0;
}
