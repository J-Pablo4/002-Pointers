//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *target, int count)
{
    // aqui su implementación.
    int i = 0;
    int pivote;
    int swap = 0;
    while(i < count)
    {
        if (*(target + i) > *(target + i + 1)) {
            pivote = *(target + i);
            *(target + i) = *(target + i + 1);
            *(target + i + 1) = pivote;
            swap++;
        }
        i++;
        if((i+1) == count){
            count--;
            i = 0;
        }
    }
  return swap;
}

void insertion_sort(int *collection, int count)
{
    int valor_insert;
    int j;
    for (int i = 1; i < count; ++i)
    {
        valor_insert = *(collection + i);
        j = i;
        while (j > 0)
        {
            j--;
            if(valor_insert <= *(collection+j))
            {
                *(collection+j+1) = *(collection+j);
            } else
            {
                j++;
                break;
            }
        }
        *(collection+j) = valor_insert;
    }
}

void reverse(int *collection, int count)
{
    int valor_intercambiable;
    for (int i = 0; i < count; ++i)
    {
        count--;
        valor_intercambiable = *(collection+count);
        *(collection+count) = *(collection+i);
        *(collection+i) = valor_intercambiable;
    }
}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}
