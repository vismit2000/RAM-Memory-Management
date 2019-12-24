#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

void displayFreeList()
{
    int i;
    printf("\nElements of free list are : ");
    printf("\n[");
    for(i = freeList.head; arr[i+1] != -1; i = arr[i+1])
        printf("%d,", i);
    printf("%d]", i);
}