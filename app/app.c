#include "pointers.h"

int main(void)
{
    int arreglo[] = {2,1,9,8,5,6, 12,0 };
    int count = 8;
    int *mi_apuntador = arreglo;
    bubble_sort(mi_apuntador,count);

    for (int i = 0; i < count; ++i) {
        printf("%d, ", *(mi_apuntador+i));
    }

  return 0;
}
