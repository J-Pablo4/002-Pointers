#include "pointers.h"

int main(void)
{
    int arreglo[10] = {18,21,3,4,58,6, 9,7 ,9,10};
    int count = 10;
    int *mi_apuntador = arreglo;
    reverse(mi_apuntador,count);

    for (int i = 0; i < count; ++i) {
        printf("%d, ", *(mi_apuntador+i));
    }

  return 0;
}
