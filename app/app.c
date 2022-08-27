#include "pointers.h"

int main(void)
{
    int arreglo[10] = {2,9,8,7,1,3, 6,4 ,5,10};
    int count = 10;
    int *mi_apuntador = arreglo;
    insertion_sort(mi_apuntador,count);

    for (int i = 0; i < count; ++i) {
        printf("%d, ", *(mi_apuntador+i));
    }

  return 0;
}
