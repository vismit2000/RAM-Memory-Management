#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

int nextfreeloc = 1;

void populate()
{
    freeList.head = nextfreeloc;
    nextfreeloc += 3;
    int temp = freeList.head;    
    for(int i = 0; i < 100; i++)
    {
        arr[temp+1] = nextfreeloc;
        temp = nextfreeloc;
        nextfreeloc += 3;
        freeList.size++;
    }
    arr[temp+1] = -1;
}