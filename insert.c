#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

doublyLL insert(int key, doublyLL dl)
{
    int i, temp;
    
    if(freeList.size == 0)
    {
    	printf("\nFAILURE: MEMORY NOT AVAILABLE\n");
    	return dl;
    }
    
    if(compare(arr[dl.head], key) == GREATER)
    {
    	temp = freeList.head;
    	freeList.head = arr[freeList.head+1];
        arr[temp] = key;
        arr[dl.head+2] = temp;
    	arr[temp+1] = dl.head;
    	arr[temp+2] = -1;
    	dl.head = temp;

    	dl.size++;
    	freeList.size--;
    	printf("\nSUCCESS\n");
    	return dl;
    }

    for(i = dl.head; arr[i+1] != -1; i = arr[i+1])
    {
        if(compare(arr[arr[i+1]], key) == GREATER)
            break;
    }
    //if(compare(arr[arr[i+1]], key) == GREATER)
    temp = freeList.head;
    freeList.head = arr[freeList.head+1];
    arr[temp+1] = arr[i+1];
    arr[temp+2] = i;
    if(arr[i+1] != -1)
    	arr[arr[i+1]+2] = temp;
    arr[i+1] = temp;
    arr[temp] = key;

    dl.size++;
    freeList.size--;
    printf("\nSUCCESS\n");
    return dl;
}