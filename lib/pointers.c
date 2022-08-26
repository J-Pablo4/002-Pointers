//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *target, int count)
{
    // aqui su implementación.
    for (int i = 0; i < count; ++i)
    {
        int pivote;

        if (*(target+i) > *(target+i+1))
        {
            pivote = *(target+i);
            *(target+i) = *(target+i+1);
            *(target+i+1) = pivote;
        }
    }
  return 0;
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
