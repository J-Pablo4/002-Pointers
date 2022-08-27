#include "pointers.h"

int main(void)
{
    int arreglo[10] = {1,1,3,4,4,4, 9,9,9,9};
    int count = 10;
    int *mi_apuntador = arreglo;
    printf("%d",calulate_frequency(mi_apuntador,count, 19));
  return 0;
}
