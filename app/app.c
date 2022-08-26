#include "pointers.h"

int main(void)
{
    int arreglo[10] = {128,9,9,800,1,13, 12,102 ,99,10};
    int count = 10;
    int *mi_apuntador = arreglo;
    bubble_sort(mi_apuntador,count);

    for (int i = 0; i < count; ++i) {
        printf("%d, ", *(mi_apuntador+i));
    }

  return 0;
}
