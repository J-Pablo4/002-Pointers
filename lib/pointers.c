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

}

void reverse(int *collection, int count)
{

}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}
