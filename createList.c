#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

doublyLL createList(int key)
{
    doublyLL dl;
    if(freeList.size == 0)
    {
    	printf("\nFAILURE: MEMORY NOT AVAILABLE\n");
    	return dl;
    }
    dl.head = freeList.head;
    freeList.head = arr[freeList.head+1];
    dl.size = 1;
    arr[dl.head] = key;
    arr[dl.head+1] = -1;
    arr[dl.head+2] = -1;
    printf("\nSUCCESS\n");
    return dl;
}