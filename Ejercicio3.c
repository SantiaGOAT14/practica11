#include <stdio.h>
#define apar = 10
#define comp = 100

void int_matrix (int arr[apar][comp])
{
  int i,j;
  for(i = 0; i < apar; i++)
  {
  for (j = 0; j < comp; ] ++)
    {
  arr[i][j] = 0
    }
  }
}
void llenar (int arr[apar][comp])
{
  int i, j, num, num2;

  for(i = 0; i < 10; i++)
    {
         printf("Dame la cantidad: ");
        scanf("%d", &num);
        
  for(j = 0; j < num; j++)
      {
        printf("Dame el numero correspondiente: (0-99) ");
        scanf("%d", &num2);
        arr [i] [num2] = 1;
      }
    }
  }  

void mensual (parmen [10])
{
  int i;
  for (i=0; i<10; i++)
  {
    printf("Numero de aparatos mensuales de %d: ", i );
    scanf("%d", &apar men[i]);
  }
}
